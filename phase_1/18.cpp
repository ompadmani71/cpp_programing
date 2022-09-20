#include<iostream>
using namespace std;

class Factorial
{
	public:
		int n,facte=1;
		
		void Setter()
		{
			cout << "Enter number you want to find Factorial : ";
			cin >> n;
		}
		
		void fact()
		{
			for(int i=n; i>=1; i--)
			{
				facte = facte * i;
			}
			
			cout << endl << endl << "Factorial is : " << facte;
		}
};

int main()
{
	Factorial f1;
	
	f1.Setter();
	f1.fact();
	
	return 0;
}


