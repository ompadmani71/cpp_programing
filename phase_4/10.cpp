#include<iostream>
#include<string.h>
using namespace std;

class Diognal
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
			
			cout << endl << endl << "Diognal Element : " << endl << endl;
			
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(i == j)
						cout << a[i][j] << " ";
					else
						cout << "  ";
				}
				cout << endl;
			}
		}
};

int main()
{
	Diognal d1;
	
	d1.dio();
	return 0;
}

