#include<iostream>
#include<string.h>
using namespace std;

class Swap
{
	private:
		int a[6],b[4],c[10],j,i;
		
	public:
		
		void SetData()
		{
			for(i=0,j=1;i<6,j<=6;i++,j++)
			{
				a[i] = j;
			}
			
			for(i=0,j=1;i<4,j<=4;i++,j++)
			{
				b[i] = j;
			}
		}
		
		Swap()
		{
			Swap::SetData();
			
			for(i=0;i<6;i++)
			{
				c[i] = a[i];
			}
			
			for(i=6,j=0;i<10,j<4;i++,j++)
			{
				c[i] = b[j];
			}
			
			cout << "Container A : ";
			for(i=0;i<6;i++)
			{
				cout << a[i] << " ";
			}
			
			cout << endl << endl << "Container B : ";
			
			for(i=0;i<4;i++)
			{
				cout << b[i] << " ";
			}
			
			cout << endl << endl << "Ater Transfer : ";
			
			for(i=0;i<10;i++)
			{
				cout << c[i] << " ";
			}
		}
		
			 
};

int main()
{
	Swap s1;

	return 0;
}

