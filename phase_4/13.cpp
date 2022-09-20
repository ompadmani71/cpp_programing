#include<iostream>
#include<string.h>
using namespace std;

class Matrix
{
	public:
		int m1[20][20],m2[20][20],m3[20][20];
		int j,i,m,n,k;
		
		void First_mat()
		{
			cout << "First matrix : " << endl << endl;
			cout << "Rows : ";
			cin >> m;
			cout << "Columns : ";
			cin >> n;
			cout << endl << endl;
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					cout << "a[" << i << "]" << "[" << j << "] = ";
					cin >> m1[i][j];
				}
			}
			
		}
		
		void Sec_mat()
		{
			cout << endl << endl;
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					cout << "b[" << i << "]" << "[" << j << "] = ";
					cin >> m2[i][j];
				}
			}
			
		}
		
		void Mul()
		{
			Matrix::First_mat();
			Matrix::Sec_mat();
			
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					m3[i][j]=0;
					for(k=0;k<n;k++)
					{
						m3[i][j] += m1[i][k] * m2[k][j];
					}
				}
			}
			
			cout << endl << endl << "Multification of marrix : " << endl << endl;
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					cout << m3[i][j] << " ";
				}
				cout << endl;
			}
		}
};
int main()
{
	Matrix m1;
	
	m1.Mul();
	
	return 0;
}

