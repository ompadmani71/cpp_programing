#include<iostream>
#include<string.h>
using namespace std;

void tran()
{
	int b[15],n,i;
	
	cout << "How many coins : ";
	cin >> n;
	
	int a[n];
	
	cout << endl << "Enter coin value : " << endl;
	for(i=0;i<n;i++)
	{
		cout << "a[" << i << "] : ";
		cin >> a[i]; 
	}
	
	for(i=0;i<n;i++)
	{
		b[i] = a[i];
	}
	
	cout << endl << endl << "Transfred coins : " << endl;
	for(i=0;i<n;i++)
	{
		cout << "b[" << i << "] : " << b[i] << endl;
	}
}

class Trans
{
	public:
		void kevin()
		{
			tran();
		}
		
};

int main()
{
	Trans kevin;
	
	kevin.kevin();
	return 0;
}

