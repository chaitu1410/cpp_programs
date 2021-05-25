#include<iostream>
#include<string>

using namespace std;

class Man
{
	private:
		string _name;
		int _age;
		Man(){}
	
	protected:
		Man(string name, int age): _name(name), _age(age){}
		void run()
		{
			puts("I can Run");
		}
		
	public:
		void sayName()
		{
			cout<<"My name is "<<_name<<" and age is "<<_age<<endl;
		}
};

class Superman: public Man
{
	private:
		bool flying = true;
	
	public:
		
		Superman(string name): Man(name, 25){}
		
		void run()
		{
			puts("I can Run super fast");
		}
};

class Spyderman: public Man
{
	private:
		bool webbing = true;
		
	public:
		Spyderman(string name): Man(name, 20){}
		
		void run()
		{
			puts("I can Run at decent speed");
		}
};

int main()
{
	// Man yogesh;  <---- Can't do this
	
	Superman henry("Clark");
	henry.sayName();
	henry.run();
	
	Spyderman tom("Peter");
	tom.sayName();
	tom.run();
	
	return 0;
}
