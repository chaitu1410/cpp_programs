#include<iostream>
#include<string>

using namespace std;

class User
{
	int _secret = 101;
	
	public:
		///// Properties /////
		
		string name = "undefined";
		bool authenticated = true;
		
		
		///// Methods /////
		
		void message()
		{
			cout<<"Welcome, "<<name<<endl;
		}
		
		//// setter
		void setSecret(const int & value)
		{
			if(value > 0)
			{
				this->_secret = value;
			}
			else
			{
				cout<<"Secret value must be greater than 0.."<<endl;
			}
		}
		
		///// Body of this mothod is defined outside of class
		int getSecret();
		
		
		///// const objects can only call constant methods of class
		int getAnotherSecret() const
		{
			return _anotherSecret;
		}
	
	//// Multiple private block in class	
	private:
		int _anotherSecret = 100;
};

//// Method declaration outside of class using scope resolution operator
int User::getSecret()
{
	if(authenticated)
		return this->_secret;
	else
		return -1;
}

int main()
{
	User dipak;
	dipak.name = "Dipak kumar";
	
	dipak.message();
	
	dipak.setSecret(-100);
	dipak.setSecret(122);
	cout<<"This is secret "<<dipak.getSecret()<<endl;
	cout<<"This is another secret "<<dipak.getAnotherSecret()<<endl;
	
	const User sujay;
	cout<<sujay.getAnotherSecret()<<endl;

	return 0;
}
