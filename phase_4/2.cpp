#include<iostream>
#include<string.h>
using namespace std;

class Arr
{
	private:
		int a[10],i,temp=0,max;
	
	public:
		
		void SetData()
		{
			cout << "Enter 10 Wights : ";
			
			for(i=0;i<10;i++)
			{
				cin >> a[i];	
			}
		}
		
		void Find_great()
		{
			temp = a[0];
			
			for(i=0;i<10;i++)
			{
				if(temp < a[i])
				{
					temp = a[i];
				}
			}
			
			cout << endl << endl << "Max of 10 : " << temp;
		}
};

int main()
{
	Arr a1;
	
	a1.SetData();
	a1.Find_great();
	return 0;
}

