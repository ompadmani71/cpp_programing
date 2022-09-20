#include<iostream>
#include<string.h>
using namespace std;

void rev()
{
	int i,n,rev;
	
	cout << "Enter Num : ";
	cin >> n;
	
	while(n != 0)
	{
		i = n % 10;
		rev = (rev*10) + i;
		n = n / 10;
	}
	
	cout << endl << endl << "Revence of num : " << rev;
}

class Rev
{
	public:
		
		Rev()
		{
			rev();
		}
};

int main()
{
	Rev r1;
	
	return 0;
}

