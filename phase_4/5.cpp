#include<iostream>
#include<string.h>
using namespace std;

class Num
{
	public:
		int n,i;
		int a[100];
		
		void Arr()
		{
			cout << "Enter Array size : ";
			cin >> n;
		}
		
		void Ele()
		{
			cout << endl << endl << "Enter Elements : ";
			for(i=0;i<n;i++)
			{
				cin >> a[i];
			}
		}
};

class Even : public Num
{
	public:
		void eve()
		{
			cout << endl << endl << "Even Elements : ";
			
			for(i=0;i<n;i++)
			{
				if(a[i] % 2 ==0)
				{
					cout << a[i] << " ";
				}
			}
		}
};

class Odd : public Even
{
	public:
		void od()
		{
			cout << endl << endl << "Odd Elements : ";
			
			for(i=0;i<n;i++)
			{
				if(a[i] % 2 ==1)
				{
					cout << a[i] << " ";
				}
			}
		}
};

int main()
{
	Odd e1;
	
	e1.Arr();
	e1.Ele();
	e1.eve();
	e1.od();
	
	
	return 0;
}

