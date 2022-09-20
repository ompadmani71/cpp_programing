#include<iostream>
#include<string.h>
using namespace std;

class Mul
{
	public:
		void Mul_3_num()
		{
			int n[3],a=1,i;
			cout << "Enter 3 number : " << endl;
			for(i=0;i<3;i++)
			{
				cin >> n[i];
			}
			
			for(i=0;i<3;i++)
			{
				a = a * n[i];
			}
			
			cout << endl << "Multification of numbers is : " << a <<endl;
		}
};

int main()
{
	Mul s1;
	
	s1.Mul_3_num();
	
	return 0;
}
