#include<iostream>
#include<string.h>
using namespace std;

void Sec_to_time()
{
	long int sec;
	int hour=0,min=0,n=0;
	
	cout << endl << "Enter Seconds : ";
	cin >> sec;
	
	while(sec >= 60)
	{
		min++;
		n++;
		if(n >= 60)
		{
			hour++;
			n -= 60;
			min -= 60;
		}
		
		sec -= 60;
	}
	
	cout << endl << endl << "Hours : " << hour << endl
	<< "Minutes : " << min << endl
	<< "Second : " << sec;
}

void time_to_sec()
{
	long int sec;
	int hour,min,n;
	
	cout << endl << "Enter Hours : ";
	cin >> hour;
	cout << "Enter Minutes : ";
	cin >> min;
	cout << "Enter Seconds : ";
	cin >> sec;	
	
	while(hour >= 1)
	{
		sec += 3600;
		hour -= 1;
	}
	while(min >= 1)
	{
		sec += 60;
		min -= 1;
	}
	
	cout << endl << endl << "Seconds : " << sec;
}

class Time
{
	public:
		int ch;
		
		Time()
		{
			cout << endl << "1. Second to HH:MM:SS format " << endl
				<< "2. HH:MM:SS to Seconds " << endl;
				
			cout << endl << endl << "Enter your choice : ";
			cin >> this->ch;
			
			switch(ch)
			{
				case 1: Sec_to_time();
					break;
					
				case 2: time_to_sec();
					break;
					
				default : cout << endl << endl << "Invalid Choice...!";
			}
		}
};

int main()
{
	Time t1;
	return 0;
}

