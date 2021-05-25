#include<iostream>

using namespace std;

template<typename T>
void fun(T n)
{
	cout<<"Fun one : "<<n<<endl;
}

template<typename T, typename... Args>
void fun(T n, Args... args)
{
	cout<<"Fun two : "<<n<<endl;
	fun(args...);
}


int main()
{
	fun(1,2,3.5,91.45,"chaitanya",43, 4.678);
	return 0;
}
