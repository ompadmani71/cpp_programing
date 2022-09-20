#include<iostream>
using namespace std;

class Number
{
	private:
		int p,n,i,flag=0;
		
	public:
		
		void Setter()
		{
			cout << "Enter number you want to check number : ";
			cin >> n;
		}
		
		void Check()
		{
			p = n / 2;
			
			for(i=2; i<=p; i++)
			{
				if(n % i == 0)
				{
					cout << "Number is not a prime..";
					flag = 1;
					break;
				}
			}
			
			if(flag == 0)
			{
				cout << endl << endl << "Number is prime.." << endl;
			}
		}
};

int main()
{
	Number n1;
	
	n1.Setter();
	n1.Check();
	
	return 0;
}


