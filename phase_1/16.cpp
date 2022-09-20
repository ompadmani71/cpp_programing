#include<iostream>
using namespace std;

class Number
{
	private:
			int n;
		
	public:
		
		void Setter()
		{
			cout << "Enter Number : ";
			cin >> n;
		}
		
		void Cheak()
		{
			if (n % 2 == 0) 
         	{
         		cout << endl << endl << "You Enter even Number...";
			}
			else
			{
				cout << endl << endl << "Your Enter odd Number...";
			}
         		   
		}
};

int main()
{
	Number n1;
	
	n1.Setter();
	n1.Cheak();
	
	return 0;
}
