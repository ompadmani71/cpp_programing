#include<iostream>
#include<string.h>
using namespace std;

void Armstrong()
{
	int n,i=0,arm_stg=0,temp;
	
	cout << "Enter Number : ";
	cin >> n;
	temp = n;
	
	while(n != 0)
	{
		i = n % 10;
		arm_stg = arm_stg + (i * i * i);
		n = n / 10;
	}
	
	if(arm_stg == temp)
	{
		cout << endl << endl << "Armstrong Number...";
	}
	else
	{
		cout << endl << endl << "Not a Armstrong Number...";
	}
	
}

class Arm
{
	public:
		Arm()
		{
			Armstrong();
		}
};

int main()
{
	Arm a1;
	
	return 0;
}

