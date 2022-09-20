#include<iostream>
#include<string.h>
using namespace std;

class Ascii
{
	public:
		char n;
		
		Ascii()
		{
			cout << "Press ant key : ";
			cin >> n;
			
			cout << endl << n << " ascii -> " << (int)(n) << endl;
		}
};

int main()
{
	Ascii stu;
	
		
	return 0;
}
