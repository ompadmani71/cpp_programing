#include<iostream>
#include<string.h>
using namespace std;

void febo_ser()
{
	int i,n,n1,n2,n3;
	
	cout << "Enter limit : ";
	cin >> n;
	
	n1 = 0;
	n2 = 1;
	
	cout << endl << endl << "Febonacci Series : " << n1 << " " << n2;
	for(i=0;i<n-2;i++)
	{
		n3 = n1 + n2;
		cout << " " << n3;
		n1 = n2;
		n2 = n3;
	}
}

class Series
{
	public:
		
		Series()
		{
			febo_ser();
		}
};

int main()
{
	Series s1;
	
	return 0;
}

