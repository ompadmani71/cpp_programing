#include<iostream>
using namespace std;

class Find
{
	private:
		char n;
		
	public:
		
		void Setter()
		{
			cout << "Enter you want to check: ";
			cin >> n;
		}
		
		void FindData()
		{
			if(this->n >= 'a' && this->n <= 'z')
			{
				cout << endl << endl 
					 << "You Entered Lowercase charecter...";
			}
			else if(this->n >= 'A' && this->n <= 'Z')
			{
				cout << endl << endl 
				     << "You Entered Uppercase charecter...";
			}
			else if(this->n >= '0' && this->n <= '9')
			{
				cout << endl << endl 
				     << "You Entered Digit...";
			}
			else
			{
				cout << endl << endl 
				     << "Special Character..." << endl;
			}
		}
};

int main()
{
	Find f1;
	
	f1.Setter();
	f1.FindData();
	
	return 0;
}


