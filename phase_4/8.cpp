#include<iostream>
#include<string.h>
using namespace std;

class Tranpose
{
	public:
		int a[20][20],b[20][20];
		int tran[20][20],i,j,m,n;
		
		void Arr()
		{
			cout << "Rows : ";
			cin >> m;
			cout << "Columns : ";
			cin >> n;
			
			cout << "Enter Elements : " << endl << endl;
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					cout << "a[" << i << "]" << "[" << j << "] = ";
					cin >> a[i][j];
				}
			}
		}
		
		void Trans()
		{
			cout << endl << endl << "Matrix order : " << endl;
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			
			
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					tran[i][j] = a[j][i];
				}
			}
			
			cout << endl << endl << "Transpose of matrix : " << endl;
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					cout << tran[i][j] << " ";
				}
				cout << endl;
			}
		}
		
		
};

int main()
{
	Tranpose t1;
	
	t1.Arr();
	t1.Trans();

	return 0;
}

