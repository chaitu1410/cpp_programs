#include<iostream>
#include<string>

using namespace std;

void swap(int & a, int & b)
{
	int temp = move(a);
	a = move(b);
	b = move(temp);
}

string getMessage()
{
	return "Hello, World!";
}


int main()
{
	int a = 10, b = 20;
	swap(a, b);
	cout<< a << " " << b <<endl;
	
	int&& d = 40;
	int&& c = move(d);
	cout<<c<<endl;

	return 0;
}
