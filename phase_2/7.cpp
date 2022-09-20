#include<iostream>
#define PI 3.14
using namespace std;

class Circle
{
	public:
		int r,ch;
		
		Circle()
		{
			cout << "Enter Redius : ";
			cin >> this->r;
		}
		
		void Area()
		{
			cout << endl << endl << "Area of circle is : " 
								 << PI * r * r;
		}
		
		void Perameter()
		{
			cout << endl << endl << "Perameter of circle is : " 
								 << PI * 2 * r;
		}
		
		void Diameter()
		{
			cout << endl << endl << "Diameter of circle is : " 
								 << 2 * r;
		}
		
		void Choice()
		{
			cout << endl << endl << "1. Area of circle" << endl
								 << "2. Perameter of circle" << endl
								 << "3. Diameter of circle" << endl
								<< "0. Exit"<< endl << endl;
			
			cout << "Enter Your choice : ";
			cin >> this->ch;
			
			Circle :: Cases();
		}
		
		void Cases()
		{
			switch(this->ch)
			{
				case 1: Circle :: Area();
					break;
					
				case 2: Circle :: Perameter();
					break;
					
				case 3: Circle :: Diameter();
					break;
			}
		}
};

int main()
{
	Circle c1;
	
	do
	{
		c1.Choice();
	}
	while(c1.ch != 0);
	
	return 0;
}


