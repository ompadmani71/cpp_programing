#include<iostream>
#include<string.h>
using namespace std;

class Convt
{
	public:
		int hour,h=0,min;
		
		void SetData()
		{
			cout << "Enter Hour : ";
			cin >> this->hour;
			
			cout << "Enter Minutes : ";
			cin >> this->min;
		}
		
		void Converter()
		{
			if(hour > 12)
			{
				while(min > 60)
				{
					hour++;
					min -= 60;
				}
				
				while(hour > 12)
				{
					hour--;
					h++;
				}
				cout << endl << endl << "Time in 12 Hr format : " << h << ":" << min;
			}
			else
			{
				while(min > 60)
				{
					hour++;
					min -= 60;
				}
				
				cout << endl << endl << "Time in 12 Hr format : " << hour << ":" << min;
			}
			
		}
};


int main()
{
	Convt c1;
	
	c1.SetData();
	c1.Converter();
	
	return 0;
}

