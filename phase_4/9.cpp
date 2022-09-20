#include<iostream>
#include<string.h>
using namespace std;

class Matrix
{
	private:
		int a[20][20];
		int j,i;
		int temp;
	
	public:
		void First_mat()
		{
			cout << "Enter weight (3 * 3) : " << endl << endl;
			
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout << "a[" << i << "]" << "[" << j << "] = ";
					cin >> a[i][j];
				}
			}
		}
		
		
		
		void Highest_weight()
		{
			temp = a[0][0];
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					if(a[i][j] > temp)
					{
						temp = a[i][j];
					}
				}
			}
			
			cout << endl << endl << "Highest weight : " << temp;
		}
		

		void Lowest_weight()
		{
			temp = a[0][0];
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					if(a[i][j] < temp)
					{
						temp = a[i][j];
					}
				}
			}
			
			cout << endl << endl << "Highest weight : " << temp;
		}
};

int main()
{
	Matrix m1;
	
	m1.First_mat();
	m1.Highest_weight();
	m1.Lowest_weight();
	return 0;
}

