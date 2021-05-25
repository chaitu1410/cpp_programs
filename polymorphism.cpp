#include<iostream>

using namespace std;

class One
{
	public:
		virtual void introduce()
		{
			puts("I am One");
		}
		
		// Pure Virtual Function
		virtual void print();
		
};

class Two: public One
{
	public:
		void introduce()
		{
			puts("I am Two");
		}
};

class Three: public One
{
	public:
		void introduce()
		{
			puts("I am Three");
		}
};


int main()
{
	One  *a;
	Two b;
	Three c;
	
	a = &b;
	a->introduce();
	
	a = &c;
	a->introduce();

	return 0;
}
