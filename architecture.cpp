#include<iostream>

#ifdef __x86_64
 #define MAX 100000;
#else
 #define MAX 65535;
#endif

int main()
{
	int a = MAX;
	
	return 0;
}
