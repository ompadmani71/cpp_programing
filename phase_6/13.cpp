#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class Counter
{
	public:
		int count = 0;
		
		void GetData()
		{
			cout << "Enter any arrow(up & down) : " << endl;
			
			while(1)
			{
				char c = getch();
				
				if(c == 72)
				{
					count++;
					cout << count << endl;
				}
				else if(c == 80)
				{
					count--;
					cout << count << endl;
				}
				
			}
		}
};

int main()
{
	Counter c1;
	
	c1.GetData();
	
	return 0;
}

