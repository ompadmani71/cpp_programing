#include<iostream>
//#include<string.h>
using namespace std;

class Leap_year
{
	protected:
		int year;
	
	public:
		void Setter()
		{
			cout << "Enter Year you want to check"
			     << " Year is leap or non leap : ";
			cin >> year; 
		}
		
		void Getter()
		{
			if( ( (year % 4 == 0) && (year % 100 != 0) ) || (year % 400 == 0))
			{ 
				cout << endl << endl 
				     << "Leap Year...";
			}
			else
			{
				cout << endl << endl 
				     << "Not a Leap Year...";
			}
		}
};

int main()
{
	Leap_year l1;
	
	l1.Setter();
	l1.Getter();
	
	return 0;
}


