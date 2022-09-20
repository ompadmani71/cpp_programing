#include<iostream>
#include<string.h>
using namespace std;

class Auction
{
	public:
		int c1,c2,c3;
		
		void Bid()
		{
			cout << endl << "...WELCOME TO AUCTION..." << endl << endl;
			cout << "Company 1 bid : ";
			cin >> this->c1;
			
			cout << endl << "Company 2 bid : ";
			cin >> this->c2;
			
			cout << endl << "Company 3 bid : ";
			cin >> this->c3;
			
			Auction::compare();
		}
		
		void compare()
		{
			(c1 > c2)	?(c1 > c3)	? cout << endl << "Company 1 won...!"
									: cout << endl << "Company 3 won...!"
						:(c2 > c3)	? cout << endl << "Company 2 won...!"
									: cout << endl << "Company 3 won...!";
		}
};

int main()
{
	Auction s1;
	
	s1.Bid();
	
	return 0;
}

