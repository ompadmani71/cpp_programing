#include<iostream>
#include<string.h>
using namespace std;

void array()
{
	int n,i,b[15],sum = 0,count=0;
	float avg;
	
	cout << "Enter Array size : ";
	cin >> n;
	
	int a[n];
	
	cout << "Enter elements : " << endl;
	for(i=0;i<n;i++)
	{
		cout << "a[" << i << "] : ";
		cin >> a[i];
	}
	
	cout << endl << endl << "Cubes of Array : " << endl;
	
	for(i=0;i<n;i++)
	{
		b[i] = a[i] * a[i] * a[i];
		
	}
	for(i=0;i<n;i++)
	{
		sum = sum + b[i];
		count++;
	}
	
	avg = sum / count;
	
	cout << endl;
	
	if(avg >= 22 && avg <= 35)
	{
		cout << "TIGHTER";
	}
	else if(avg > 35 && avg <= 50)
	{
		cout << "BALANCED";
	}
	else if(avg > 50)
	{
		cout << "TOXIC";
	}
	else if(avg < 22)
	{
		cout << "LOOSER";
	}
}

class Arr
{
	public:
		void k()
		{
			array();
		}
};

int main()
{
	Arr a1;
	
	a1.k();
	return 0;
}

