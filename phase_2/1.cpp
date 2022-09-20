#include<string.h>
#include<iostream>
using namespace std;

class Table
{
	private:
		int n1,n2;
		int i,j;
		
	public:
		
		void SetData()
		{
			cout << "Enter Start table Number : ";
			cin >> this->n1;
			
			cout << "Enter end table number : ";
			cin >> this->n2;
		}
		
		void GetData()
		{
			if(n1 < n2)
			{
				for(j=n1;j<=n2;j++)
				{
					for(i=1;i<=10;i++)
					{
						cout << j << " * " << i << " = " << j*i << endl ;
					}
					cout << endl << endl;
				}
			}
			else
			{
				for(j=n1;j>=n2;j--)
				{
					for(i=1;i<=10;i++)
					{
						cout << j << " * " << i << " = " << j*i << endl;
					}
					cout << endl << endl;
				}
			}
		}
};

int main()
{
	Table t1;
	
	t1.SetData();
	
	t1.GetData();
	
	return 0;
}
