#include<iostream>
#include<memory>

using namespace std;

/*
 * Using Smart Pointers, we can make pointers to work -
 * in a way that we don’t need to explicitly call delete.
 * 
 * 1. Unique Pointer is a samrt pointer which doesnt allow to create copy of itself
 * 
 * 2. Shared Pointer is a samrt pointer which allows to create copy of itself
 * 
 * */

class User
{
	public:
		
		User()
		{
			cout<<"Object created\n";
		}
		
		~User()
		{
			cout<<"Object destroyed\n";
		}
		
		void test()
		{
			cout<<"Test Successful...\n";
		}
};

int main()
{
	cout<<"Inside main\n";
	
	weak_ptr<User> nitin;
	
	//// Empty Scope
	{
		////  unique_ptr<User> om(new User());   //Old Way, doesn't cause memory leak
		
		//// Modern way
		unique_ptr<User> om = make_unique<User>();
		om->test();
		
		//// Not Allowed
		// unique_ptr<User> kiran = om;
	}
	
	{
		//// shared_ptr<User> mahesh(new User());  May cause memory leak
		
		//shared_ptr<User> mahesh = make_shared<User>();
		auto mahesh = make_shared<User>();
		mahesh->test();
		
		//// Copy of pointer is allowed in shared pointer
		shared_ptr<User> kiran = mahesh;
		kiran->test();
		
		nitin = mahesh;
		
	}
	
	cout<<"--------------\n";
	
	nitin.lock()->test();
	
	return 0;
}
