#include<iostream>
#include<string.h>
#define PI 3.14
using namespace std;

class Opreations
{
	public:
		int r,a,l,h,b;

		void area_cir()
		{
			cout << endl << endl << "Enter Redius : ";
			cin >> r;
			
			cout << endl << endl << "Area of Circle : " << r * PI * r;
		}
		
		void pera_cir()
		{
			cout << endl << endl << "Enter Redius : ";
			cin >> r;
			
			cout << endl << endl << "Area of Circle : " << 2 * PI * r;
		}
		
		void square()
		{
			cout << endl << endl << "Enter Area : ";
			cin >> a;
			
			cout << endl << endl << "Area of Circle : " << a * a;
		}
		
		void rectrangle()
		{
			cout << endl << endl << "Enter Lenght : ";
			cin >> l;
			cout << endl << "Enter Hight : ";
			cin >> h;
			
			cout << endl << endl << "Area of Circle : " << l * h;
		}
		
		void tringle()
		{
			cout << endl << endl << "Enter Lenght : ";
			cin >> b;
			cout << endl << "Enter Hight : ";
			cin >> h;
			
			cout << endl << endl << "Area of Circle : " << (b * h) / 2;
		}
		
		void sphere()
		{
			cout << endl << endl << "Enter Redius : ";
			cin >> r;
			
			cout << endl << endl << "Area of Spehre : " << 4 * PI * r * r;
		}
};

class Math : public Opreations
{
	public:
		int ch;
		
		Math()
		{
			cout << endl << endl << "1. Area of circle " << endl
				<< "2. Perimeter of circle " << endl 
				<< "3. Area of square " << endl
				<< "4. Area of rectrangle " << endl
				<< "5. Area of tringle " << endl 
				<< "6. Area of sphere" << endl << endl;
				
				cout << "Enter your choice : ";
				cin >> ch;
				
				switch(ch)
				{
					case 1: area_cir();
						break;
						
					case 2: pera_cir();
						break;
						
					case 3: square();
						break;
						
					case 4: rectrangle();
						break;
						
					case 5: tringle();
						break;
						
					case 6: sphere();
						break;
					
					default : cout << endl << endl << "Invalid Choice....";
				}
		};
};

int main()
{
	Math m1;
	
	return 0;
}

