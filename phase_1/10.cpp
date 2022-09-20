#include<iostream>
using namespace std;

class Convertr
{
	private:
		int year=0, month=0, day;
		int day1;
		
	public:
		
		void Setter()
		{
			cout << "Enter  Days : ";
			cin >> day;
			day1 = day;
			
			while(day1 >= 365)
			{
				year++;
				day1 -= 365;
			}
			
			while(day1 >= 30)
			{
				month++;
				day1 -= 30;
			}
			
		}
		
		void Getter()
		{
			cout << endl << "Year : " << year << endl
			             << "Month : " << month << endl
						 << "Day : " << day1 << endl;
		}
};

int main()
{
	Convertr c1;
	
	c1.Setter();
	c1.Getter();
	
	return 0;
}


