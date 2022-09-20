#include<iostream>
#include<string.h>
using namespace std;

class Time
{
	private:
		long long int second;
		int minute=0,hour=0,n=0;
		
	public:
		
		Time()
		{
			cout << endl << "Enter Seconds : ";
			cin >> this->second;
		}
		
		void Divide()
		{
			while(second >= 60)
			{
				minute++;
				n++;
				
				if(n >= 60)
				{
					hour++;
					n -= 60;
					minute -= 60;
				}
				
				second -= 60;
			}
			
			cout << endl << endl << "Hours : " << this->hour 
						 << endl << "Minutes : " << this->minute
						 << endl << "Second : " << this->second;
		}
	
};

int main()
{
	Time t1;
	
	t1.Divide();
	
	return 0;
}

