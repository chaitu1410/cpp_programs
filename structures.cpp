#include<iostream>

struct User
{
	const int uId;
	const char *name;
	const char *email;
	double income;
	
	//User(): uId(000), name("undefined"), email("undefined"), income(-1){}
};

int main()
{
	using namespace std;
	User john = {001, "John", "john@gmail.com", 504500.45};
	User vilas = {002, "Vilas", "vilas@gmail.com", 600000};
	
	cout << john.email<<endl;
	cout << vilas.email<<endl;
	
	return 0;
}
