#include<iostream>

int addition(int a, int b)
{
	return a+b;
}


int main()
{
	using namespace std;
	int (*add)(int, int) = addition;
	cout<<add(20,30)<<endl;
	return 0;
}
