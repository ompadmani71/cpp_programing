#include<iostream>
#include<string.h>
using namespace std;

class Matrix
{
	public:
		int m1[20][20],m2[20][20],m3[20][20];
		int j,i;
		
		void First_mat()
		{
			cout << "First matrix (3 * 3) : " << endl << endl;
			
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout << "a[" << i << "]" << "[" << j << "] = ";
					cin >> m1[i][j];
				}
			}
			
		}
		
		void Sec_mat()
		{
			cout << endl << endl << "Second matrix (3 * 3) : " << endl << endl;
			
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout << "b[" << i << "]" << "[" << j << "] = ";
					cin >> m2[i][j];
				}
			}
			
		}
		
		void Sum()
		{
			Matrix::First_mat();
			Matrix::Sec_mat();
			
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					m3[i][j] = m1[i][j] + m2[i][j];
				}
			}
			
			cout << endl << endl << "Add of marrix : " << endl << endl;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
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
	
	m1.Sum();
	return 0;
}

