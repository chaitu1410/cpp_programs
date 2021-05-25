#include<iostream>

using namespace std;

//// Database class is singleton, only one instance of Database class will be created
class Database
{
	static Database *_database;
	
	Database()
	{
		cout<<"Singleton Created...";
	}
	
	Database(Database & database){}
	
	public:
		int code = 10010;
		
		static Database getDatabase()
		{
			if(_database == nullptr)
			{
				_database = new Database;
			}
			return *_database;
		}
};

Database* Database::_database = nullptr;

int main()
{
	Database db = Database::getDatabase();

	cout<<endl<<db.code<<endl;
	
	return 0;
}

