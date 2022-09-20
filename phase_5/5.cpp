#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

void Min_num()
{
	int n1,n2,n3;
	
	cout << endl << endl << "Enter three Numbers : " << endl;
	cin >> n1 >> n2 >> n3;
	
	cout << endl;
	
	(n1 > n2)	?(n1 > n3)	? cout << n1 << " is Max"
							: cout << n3 << " is Max"
				:(n2 > n3)  ? cout << n2 << " is Max"
							: cout << n3 << " is Max";
							
}

void Square()
{
	int n;
	
	cout << endl << endl << "Enter Num for Square : ";
	cin >> n;
	
	cout << endl << endl << "Sqaure of num : " << n * n;
}

void Sq_rt()
{
	int n;
	
	cout << endl << endl << "Enter Num for Square : ";
	cin >> n;
	
	cout << endl << endl << "Sqaure root of num : " << sqrt(n);
}

void comp_num()
{
	int n,i;
	
	cout << endl << endl << "Enter Num for Square : ";
	cin >> n;
	
	cout << endl << "Components : ";
	for(i=1;i<=n;i++)
	{
		if(n % i == 0)
		{
			cout << i << " ";
		}
	}
}

class Cal
{
	public:
		Cal()
		{
			int ch;
			
			cout << endl << endl << "1. Maximun of 3 num " << endl
			<< "2. Square of num" << endl 
			<< "3. Square root of num " << endl
			<< "4. Components of num " << endl
			<< "0. Exit" << endl << endl;
			
			cout << "Enter your choice : ";
			cin >> ch;
			
			switch(ch)
			{
				case 1: Min_num();
					break;
					
				case 2: Square();
					break;
					
				case 3: Sq_rt();
					break;
					
				case 4: comp_num();
					break;
				
			}
		}
};

int main()
{
	Cal s1;

	return 0;
}

