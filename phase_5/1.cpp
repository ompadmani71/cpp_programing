#include<iostream>
#include<string.h>
using namespace std;

void add(int a,int b)
{
	cout << endl << "Addition is : " << a+b;
}
void sub(int a,int b)
{
	cout << endl << "Subtraction is : " << a-b;
}
void mul(int a,int b)
{
	cout << endl << "Multification : " << a*b;
}
void div(int a,int b)
{
	cout << endl << "Division is : " << a / b;
}
void mod(int a,int b)
{
	cout << endl << "Modulus is : " << a % b;
}

class A
{
	public:
		int ch;
		int a,b;
		
		void print()
		{
			cout << endl << endl << "Enter Value 1 : "; cin >> this->a;
			cout << "Enter value 2 : "; cin >> this->b;
			do
			{
				
				cout << endl << endl << "1. Addition " << endl
				<< "2. Subtraction " << endl 
				<< "3. Multification " << endl
				<< "4. Division " << endl
				<< "5. modulus " << endl 
				<< "0. Exit" << endl << endl;
				
				cout << "Enter your choice : ";
				cin >> ch;
				
				switch(ch)
				{
					case 1: add(a,b);
						break;
						
					case 2: sub(a,b);
						break;
						
					case 3: mul(a,b);
						break;
						
					case 4: div(a,b);
						break;
						
					case 5: mod(a,b);
						break;
					
				}
			}
			while(ch != 0);
		}
		
};
int main()
{
	A o1;
	
	o1.print();
	
	return 0;
}

