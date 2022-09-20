#include<iostream>
#include<string.h>
using namespace std;

class India 
{
	public:
	
	void Display()
	{
		cout << endl << "\t India = Dhoti - Kurta " << endl;
	}
};

class Pakistan : public  India 
{
	public:
		
	void Display()
	{
		cout << endl << "\t Pakistan = Pathani - Kurta " << endl;
	}	
};

class Bangladesh : public Pakistan
{
	public:
	
	void Display()
	{
		cout << endl << "\t Bangladesh = Pathani , Koti and Kurta " << endl;
	}	
};

int main()
{
	India r1;
	Pakistan r2;
	Bangladesh r3;
	
	r1.Display();
	r2.Display();
	r3.Display();
	
}
