#include<iostream>
using namespace std;

class Converter
{
	private:
		int ch;
		float f,c;
		
	public:
		
		void c_to_f()
		{
			cout << endl << endl << "Enter Celsius : ";
			cin >> this->c;
			
			cout << endl << endl << "Fahrenheit : " << (c * 9/5) + 32.00;
		}
		
		void f_to_c()
		{
			cout << endl << "Enter Fahrenheit : ";
			cin >> this->f;
			
			cout << endl << endl << "Celsius : " << (f-32 ) * 5/9;
		}
		
		void Setter()
		{
			cout << endl << endl << "Press 1 for Celsius to Fahrenheit" << endl
								 << "Press 2 For Fahrenheit to Celsius" << endl
								 << "Press 3 For Exit"<< endl << endl;
			
			cout << "Enter Your choice : ";
			cin >> this->ch;
		}
		
		void  Case()
		{
			Setter();
			
			switch(this->ch)
			{
				case 1: c_to_f();
					break;
				
				case 2: f_to_c();
					break;

			}
		}
	
	
};

int main()
{
	Converter c1;
	
	c1.Case();
	
	return 0;
}

