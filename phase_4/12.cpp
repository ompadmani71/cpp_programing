#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Matrix
{
	public:
		int i,j;
		int a[5][5] = { {1,2,3,4,5},
						{6,7,8,9,2},
						{2,8,9,6,5},
						{6,0,8,3,9},
						{1,2,3,3,5}
					};
		
		
		void dio()
		{
			cout << "Matrix : " << endl << endl;
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			
			cout << endl << endl << "Upper Tringle ele. : " << endl << endl;
			
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(i+j==4 || i==0 || j==0 || (i==1&&j==1) || (i==1&&j==2) || (i==2&&j==1) )
						cout << a[i][j] << " ";
					else
						cout << "  ";
				}
				cout << endl;
				cout << "Press key when throwing hats...";
				system("pause>null");
			}
			
			cout << endl << endl << "Lower Tringle ele. : " << endl << endl;
			
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(i+j==4 || i==4 || j==4 || (i==3&&j==3) || (i==3&&j==2) || (i==2&&j==3) )
						cout << a[i][j] << " ";
					else
						cout << "  ";
				}
				cout << endl;
				cout << "Press key when throwing hats...";
				system("pause>null");
			}
		}
};


int main()
{
	Matrix o1;
	
	o1.dio();
	return 0;
}

