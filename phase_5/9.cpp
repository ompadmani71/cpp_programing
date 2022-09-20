#include<iostream>
#include<string.h>
using namespace std;

void Sec_to_time()
{
	long int sec=0;
	int hour=0,min=0,n=0;
	int s1,s2;
	
	cout << endl << "Enter first Seconds : ";
	cin >> s1;
	cout << endl << "Enter second Seconds : ";
	cin >> s2;
	
	if(s1 > s2)
	{
		sec = s1 - s2;
	}
	else
	{
		sec = s2 - s1;
	}
	
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
	
	cout << endl << endl << "DIffrance is : " << endl << endl << "Hours : " << hour << endl
	<< "Minutes : " << min << endl
	<< "Second : " << sec;
}

void time_to_sec()
{
	long int sec=0;
	int hour=0,min=0,n=0;
	int h1,h2,s1,s2,m1,m2;
	
	cout  << endl << "First time :" << endl 
	<< endl << "Enter Hours : ";
	cin >> h1;
	cout << "Enter Minutes : ";
	cin >> m1;
	cout << "Enter Seconds : ";
	cin >> s1;	
	
	cout  << endl << endl << "Second time :" << endl 
	<< endl << "Enter Hours : ";
	cin >> h2;
	cout << "Enter Minutes : ";
	cin >> m2;
	cout << "Enter Seconds : ";
	cin >> s2;
	
	// first time
	while(h1 >= 1)
	{
		s1 += 3600;
		h1 -= 1;
	}
	while(m1 >= 1)
	{
		s1 += 60;
		m1 -= 1;
	}
	
	// second time
	while(h2 >= 1)
	{
		s2 += 3600;
		h2 -= 1;
	}
	while(m2 >= 1)
	{
		s2 += 60;
		m2 -= 1;
	}
	
	if(s1 > s2)
	{
		sec = s1 - s2;
	}
	else
	{
		sec = s2 - s1;
	}
	cout << endl << endl << "Diffrance Seconds : " << sec;
}

class Time
{
	public:
		int ch;
		
		Time()
		{
			cout << endl << "Which format : ";
			cout << endl << endl << "1. Seconds format" << endl 
			<< "2. HH:MM:SS format";
				
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


