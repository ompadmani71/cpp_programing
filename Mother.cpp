#include<iostream>
#include<stdio.h>
using namespace std;

class Mother
{
	public:

	void Display()
	{
		cout << "My name is Mother. i am 60 years old";
	}
};

class Daughter : public Mother
{
	public:
		
		void DDisplay()
		{
			Display();
			
			cout << endl
			     << "My name is Daughter. i am 30 years old";
		}
		
};

int main()
{
	Daughter d1;
	
	d1.DDisplay();
}
