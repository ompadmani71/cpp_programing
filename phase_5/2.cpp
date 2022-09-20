#include<iostream>
#include<string.h>
using namespace std;

int fact(int n)
{
	if(n == 1)
	{
		return 1;
	}
	else
	{
		return n * fact(n-1);
	}
}

class factorial
{
	public:
		int n1,n2,i;
		
		factorial()
		{
			cout << "Enter starts : ";
			cin >> n1;
			cout << "Enter End : ";
			cin >> n2;
			
			cout << endl;
			
			for(i=n1;i<=n2;i++)
			{
				cout << "factorial is : " << fact(i) << endl;
			}	
		}
};

int main()
{
	factorial f1;
	
	return 0;
}

