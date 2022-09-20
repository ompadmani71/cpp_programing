#include<iostream>
using namespace std;

class Shape
{
	public:
		int A1;
		int A2;
		
	shape(int a, int b)
	{
		this ->A1 = a;
		this->A2 = b;
	}
	
	
};

class Rectangle : public Shape
{
	
	public:
		
	void R_area()
	{
		int area;
		
		area = A1 * A2;
		cout << endl
		     << "Area of Ractangle = " 
		     << area;
	}
};

class Triangle : public Shape
{
	public:
		
	void T_area()
	{
		int area;
		
		area = A1 * A2 / 2;
		cout << endl
		     << "Area of Traingle = " 
		     << area;
	}
};

int main()
{
	int a,b,c,d;
	
	Rectangle R;
	Triangle T;
	
	cout << "Enter Width of Ractangle : ";
	cin >> a;
	
	cout << "Enter Hight of Rectangle : ";
	cin >> b;
	
	cout << "Enter Base Of Traingle : ";
	cin >> c;
	
	cout << "Enter Hight of Traingle : ";
	cin >> d;
	
	
	R.shape(a, b);
	T.shape(c, d);
	R.R_area();
	T.T_area();
	
	return 0;
}















