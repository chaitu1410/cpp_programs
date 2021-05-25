#include<iostream>

using namespace std;

enum FontStyle: uint8_t
{
	BOLD=1,
	ITALIC,
	UNDERLINE
};

int main()
{
	cout<<UNDERLINE<<endl;
	return 0;
}
