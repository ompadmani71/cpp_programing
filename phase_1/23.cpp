#include<iostream>
using namespace std;

class Armstrong
{
	public:
		int i,num,temp,sum,y;
		
		void Setter()
		{
			cout << "Enter The number : ";
			cin >> num;
			
			temp = num;
		}
		
		void Get_logic()
		{
			while(num != 0)
			{
				y = num % 10;
				
				sum = sum + (y * y * y);
				
				num /= 10;
			}
			
			if(temp == sum)
			{
				cout << endl << endl << "Armstrong number.." << endl;
			}
			else
			{
				cout << endl << endl << "Not a Armstrong num.." << endl;
			}
		}
};

int main()
{
	Armstrong a1;
	
	a1.Setter();
	a1.Get_logic();
	
	return 0;
}


