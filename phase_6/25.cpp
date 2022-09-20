#include<string.h>
#include<iostream>
using namespace std;

class Shape
{
	public:
		int hight,base,lenght;
		int tot,i;
		
		// constructor
		Shape()
		{
			cout << endl << "Enter Hight :"; cin >> this->hight;
			cout << "Enter base : "; cin >> this->base;
			cout << "Enter Langht : "; cin >> this->lenght; 
		}
};

class Triangle : public Shape
{
	public:
		int tot = 0.5 * base * hight;
		void GetData()
		{
			cout << endl << endl << "Trangle : " << tot;
		}
};

class Rectangle : public Shape
{
	public:
		int tot = lenght * base;
		void GetData()
		{
			cout << endl << endl << "Rectrangle : " << tot << endl << endl;
		}
};


int main()
{
	Shape o1();
	Triangle o2;
	Rectangle o3;
	
	
	o2.GetData();
	o3.GetData();
	
	return 0;
}


