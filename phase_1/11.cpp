#include<iostream>
using namespace std;

class Sqrt
{
	public:
		int i=0;
		float root=1;
		int num;
		
		Sqrt()
		{
			cout << "Enter Number for Squre root : ";
			cin >> num;
			
			while(1)
			{
				i = i + 1; // i = 1;
				root = (num / root + root) / 2; // (256 / 1 + 1) / 2  =  63 	//  
				
				if(i == num+1) // 1 == 256 + 1
				{
					break;
				}
			}
			
			cout << endl << endl << "Root : " << root << endl << endl;
		}
};

int main()
{
	Sqrt s1;
	
	return 0;
}


