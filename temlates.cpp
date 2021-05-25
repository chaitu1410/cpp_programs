#include<iostream>

template<typename T>
T add(T n1, T n2)
{
	return n1+n2;
}

template<typename T>
T sub(T n1, T n2)
{
	return n1-n2;
}

int main()
{
	using namespace std;
	
	int a=10, b=20;
	float x=25.56, y=32.82;
	
	cout<< "Add "<<a<<" and "<<b<<" : "<<add(a, b)<<endl;
	cout<< "Add "<<x<<" and "<<y<<" : "<<add(x, y)<<endl;
	cout<< "Subtract "<<a<<" from "<<b<<" : "<<sub(b, a)<<endl;
	cout<< "Subtract "<<x<<" from "<<y<<" : "<<sub(y, x)<<endl;
	return 0;
}
