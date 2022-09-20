#include<iostream>
#include<stdio.h>
using namespace std;

class City
{
	public:
		int id;
		char name[100];
	
	City()
	{
		cout << "Enter Id : ";
		cin >> this->id;
		
		fflush(stdin);
		
		cout << "Enter Name : ";
		gets(this->name);
	}
	
	void GetData()
	{
		cout << "Id : " << this->id 
		     << "Name : " << this->name;
	}
	
};

int main()
{
	City c1;
	
	c1.GetData();
	
return 0;

}


