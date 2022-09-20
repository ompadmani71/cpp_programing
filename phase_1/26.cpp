#include<iostream>
using namespace std;

class Palindrome
{
	private:
		int n,temp,i,rev;
		
	public:
		
		void Setter()
		{
			cout << "Enter any Number : ";
			cin >> n;
			
			temp = n;
		}
		
		void Get_logic()
		{
			while(n != 0)
			{
				i = n % 10;
				rev = (rev * 10) + i;
				n = n / 10;
			}
			
			if(temp == rev)
			{
				cout << endl << endl << "Palindrome Number.." << endl;
			}
			else
			{
				cout << endl << endl << "Not a Palindrome Number.." << endl;
			}
		}
};

int main()
{
	Palindrome p1;
	
	p1.Setter();
	p1.Get_logic();
	
	return 0;
}


