#include<iostream>
#include<string.h>
using namespace std;

class Years
{
	public:
		int n,i,j;
		int a[100],b[100];
		
		void Arr()
		{
			cout << "How many Years : ";
			cin >> n;
		}
		
		void Ele()
		{
			cout << endl << endl << "Enter Years : ";
			for(i=0;i<n;i++)
			{
				cin >> a[i];
			}
		}
		
		void Cheak()
		{
			cout << endl << endl << "Repeat Years : ";
			for(i=0;i<n;i++)
			{
				if(a[i]!=0)
				{
					for(j=i+1;j<n;j++)
					{
						if(a[i] == a[j])
						{
							cout << a[i] << " ";
							a[i] = 0;
						}
					}
				}
			}
		}
};

int main()
{
	Years w1;
	
	w1.Arr();
	w1.Ele();
	w1.Cheak();
	return 0;
}

