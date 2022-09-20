#include<iostream>
using namespace std;

class Calculator
{
	public:
		int n1,n2,ch;
		
		Calculator()
		{
			cout << "Enter First Value : ";
			cin >> this->n1;
			
			cout << "Enter Second Value : ";
			cin >> this->n2;
		}
		
		void Display()
		{
			cout << endl << endl << "1. Additon" << endl
			<< "2. Subtraction" << endl
			<< "3. Multification" << endl
			<< "4. Division" << endl
			<< "5. Modulus" << endl 
			<< "0. Exit"<< endl << endl;
			
			cout << "Enter Your choice : ";
			cin >> this->ch;
		}
		
		void Case()
		{
			switch(this->ch)
			{
				case 1: cout << endl << "Addition is : " 
				                     << n1 + n2;
					break;
					
				case 2: cout << endl << "Subtraction is : " 
				                     << n1 - n2;
					break;
					
				case 3: cout << endl << "Multification is : " 
									 << n1 * n2;
					break;
					
				case 4: cout << endl << "Division is : " 
									 << n1 / n2;
					break;
					
				case 5: cout << endl << "Addition is : " 
									 << n1 % n2;
					break;
					
			}
		}
		
};

int main()
{
	Calculator c1;
	
	do
	{
		c1.Display();
		c1.Case();
		
	}
	while(c1.ch != 0);
	
	return 0;
}


