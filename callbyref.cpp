
#include<iostream>
#include "headers.h"

void swap(int &x, int &y)
{
	x = add(x, y);
	y = sub(x, y);
	x = sub(x, y);
}

int main()
{
	using namespace std;
	
	int x=10, y=20;
	int &z = x;
	
	cout<< x << " " << y <<endl;
	cout<<z<<endl;
	
	swap(x, y);
	
	cout<< x << " " << y <<endl;
	cout<<z;
	return 0;
}
