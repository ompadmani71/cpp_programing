#include<iostream>
#include<string.h>
using namespace std;

class Swap
{
	public:
		int n1,n2,temp;
		
		Swap()
		{
			cout << "Enter Your marks : ";
			cin >> this->n1;
			
			cout << endl << "Enter Mark for Passing : ";
			cin >> this->n2;
			
			this->temp = this->n1;
			this->n1 = this->n2;
			this->n2 = this->temp;
			
			cout << endl << endl << "Your updated marks : " << n1;
		}
};

int main()
{
	Swap s1;
	
	return 0;
}

