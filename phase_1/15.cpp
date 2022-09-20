#include<iostream>
#include<string.h>
using namespace std;

class Cheaker
{
	private:
		char n;
		
	public:
		
		void Setter()
		{
			cout << "Enter Charector : ";
			cin >> n;
		}
		
		void Check()
		{
			if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || 
			    n == 'u' || n == 'A' || n == 'E' || n == 'I' || 
				n == 'O' || n == 'U') 
         	{
         		cout << endl << endl << "You Entered vowel...";
			}
			else
			{
				cout << endl << endl << "Your Entered constant...";
			}
         		   
		}
};

int main()
{
	Cheaker c1;
	
	c1.Setter();
	c1.Check();
	
	return 0;
}


