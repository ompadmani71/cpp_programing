#include<iostream>
#include<string.h>
using namespace std;

class Math
{
	public:
		int n1,n2;
		int q,r;
		
		Math()
		{
			cout << "Enter dividend : ";
			cin >> n1;
			
			cout << "Enter divisor : ";
			cin >> n2;
		}
		
		void quotient_and_remainder()
		{
			q = n1 / n2;
			r = n1 % n2;
			
			cout << "quotient : " << q << endl << "remainder : " << r << endl;
		}
};


int main()
{
	Math stu;
	
	stu.quotient_and_remainder();
	
	return 0;
}
