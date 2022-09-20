#include<iostream>
using namespace std;

class Digit
{
	private:
		int n,digit=0;
		
	public:
		void Setter()
		{
			cout << "Enter Any number : ";
			cin >> n;
		}
		
		void Getter()
		{
			while(n > 0)
			{
				digit++;
				n = n / 10;
			}
			
			cout << endl << endl << "Number of digit is : " << digit;
		}
};

int main()
{
	Digit d1;
	
	d1.Setter();
	d1.Getter();
	return 0;
}


