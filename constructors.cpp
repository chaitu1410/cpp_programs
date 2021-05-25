#include<iostream>
#include<string>

using namespace std;

class Phone
{
	private:
		string _name;
		string _os;
		double _price;
	
	public:
		
		//// Default Constructor
		Phone(): _name("undefined"), _os("undefined"), _price(0.0)
		{
			puts("Default Constructor Invoked...");
		}
		
		//// Parameterised constructor
		Phone(const string & name, const string & os, const double & price): _name(name), _os(os), _price(price)
		{
			puts("Parameterised Constructor Invoked...");
		}
		
		//// Copy Constructor
		Phone(const Phone & value): _name("Copy "+value._name), _os("Copy "+value._os), _price(value._price)
		{
			puts("Copy Constructor called...");
		}
		
		~Phone()
		{
			printf("Destructor called for %s\n", _name.c_str());
		}
		
		void print()
		{
			cout<<"___________________"<<endl;
			cout<<"Name: "<<_name<<endl;
			cout<<"OS: "<<_os<<endl;
			cout<<"Price: "<<_price<<endl;
			cout<<"___________________"<<endl<<endl;
		}
		
};

////// Consstructor outside class
/*
Phone(): _name("undefined"), _os("undefined"), _price(0.0)
{
	puts("Default Constructor Invoked...");
}
*/

int main()
{
	Phone SamsumgM30;
	Phone MiA10("Mi A10", "Android 12", 23999.0);
	Phone MiA10Copy = MiA10;
	SamsumgM30.print();
	MiA10.print();
	MiA10Copy.print();
	return 0;
}
