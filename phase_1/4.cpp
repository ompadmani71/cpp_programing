#include<iostream>
#include<string.h>
using namespace std;

class Swap
{
	public:
		int n1,n2;
		int q,r;
		
		Swap()
		{
			cout << endl << "Enter first num : ";
			cin >> n1;
			
			cout << "Enter Second num : ";
			cin >> n2;
		}
		
		void swap()
		{
			n1 = n1 + n2;
			n2 = n1 - n2;
			n1 = n1 - n2;
			
			cout << endl << endl << "First num is: " << n1 << endl << endl;
			
			cout << "Second num is : " << n2;
		}
};

int main()
{
	Swap stu;
	
	stu.swap();
	
	return 0;
}

