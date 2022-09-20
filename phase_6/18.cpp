#include<iostream>
#include<string.h>
using namespace std;

class Number
{
	public:
		int num;
		
		void Num_pro()
		{
			cout << "Enter Any number : ";
			cin >> this->num;
			
			num = num + 8;
			num = num * 3;
			num = num - 12 + 5;
			num = num + 2003 - 2021;
			
			if(num % 7 == 0)
			{
				cout << endl << endl << num << " is divisible by 7 ";
			}
			else
			{
				cout << endl << endl << num << " is not divisible by 7 ";
			}
		}
};

int main()
{
	Number n1;
	
	n1.Num_pro();
	
	return 0;
}

