#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
	

class Complax
{
	public:
		int x,y;
		
		void SetData(int n1,int n2)
		{
			this->x = n1;
			this->y = n2;
		}
		
		void GetData()
		{
			cout << endl << this->x << " + " << this->y << "j" << endl;
		}
		
		Complax operator+(Complax n)
		{
			Complax t;
			t.x = this->x + n.x;
			t.y = this->y + n.y;
			
			return t;
		}
		
		Complax operator-(Complax n)
		{
			Complax t;
			t.x = this->x - n.x;
			t.y = this->y - n.y;
			
			return t;
		}
		
		Complax operator*(Complax n)
		{
			Complax t;
			t.x = this->x * n.x;
			t.y = this->y * n.y;
			
			return t;
		}
		Complax operator/(Complax n)
		{
			Complax t;
			t.x = this->x / n.x;
			t.y = this->y / n.y;
			
			return t;
		}
		Complax operator%(Complax n)
		{
			Complax t;
			t.x = this->x % n.x;
			t.y = this->y % n.y;
			
			return t;
		}
};


int main()
{
	Complax c1,c2,c3;
	int a1,a2,b1,b2,ch;
	
	cout << "Complax no. 1 : ";
	cout << endl << endl << "Real num : ";
	cin >> a1;
	cout << "Imegnary num : ";
	cin >> b1;
	
	cout << endl << endl << "Complax no. 2 : ";
	cout << endl << endl << "Real num : ";
	cin >> a2;
	cout << "Imegnary num : ";
	cin >> b2;
	
	c1.SetData(a1,b1);
	c2.SetData(a2,b2);
	
	c1.GetData();
	c2.GetData();
	
	
	cout << endl << endl << "1. Additon" << endl
			<< "2. Subtraction" << endl
			<< "3. Multification" << endl
			<< "4. Division" << endl
			<< "5. Modulus" << endl << endl;
			
			cout << "Enter Your choice : ";
			cin >> ch;
	
	switch(ch)
	{
		case 1:
			 c3 = c1 + c2; 
		     c3.GetData();
			break;
			
		case 2:
			c3 = c1 - c2; 
		     c3.GetData();
			break;
			
		case 3:
			c3 = c1 * c2; 
		     c3.GetData();
			break;
			
		case 4:
			c3 = c1 / c2; 
		     c3.GetData();
			break;
			
		case 5:
			c3 = c1 % c2; 
		     c3.GetData();
			break;
	}
	
	
	
	return 0;
}

