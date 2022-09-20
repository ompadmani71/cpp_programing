#include<iostream>
#include<string.h>
using namespace std;

class Years
{
	public:
		int n,i,p,j;
		int a[5];
		
		void Ele()
		{
			cout << endl << endl << "Enter 5 ball lables : ";
			for(i=0;i<5;i++)
			{
				cin >> a[i];
			}
		}
		
		void sort()
		{
			for(i=0;i<5;i++)
			{
				for(j=i+1;j<5;j++)
				{
					if(a[i] > a[j])
					{
						p = a[i];
						a[i] = a[j];
						a[j] = p;
					}
				}
			}
			
			cout << "Sorting balls : ";
			for(i=0;i<5;i++)
			{
				cout << a[i] << " ";
			}
		}
};

int main()
{
	Years w1;
	
	w1.Ele();
	
	w1.sort();
	return 0;
}

