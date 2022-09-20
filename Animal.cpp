#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Animal 
{
	public:
		
	char Name[100],Birth[100];
	int Age;
	
	void SetData()
	{
		strcpy(this->Name,"Dolphin" );
		this->Age = 8;
		strcpy(this->Birth ,"Goa");
	}

	void SetData2()
	{
		strcpy(this->Name,"Zebra" );
		this->Age = 10;
		strcpy(this->Birth ,"Africa");
	}
	
};

class Dolphin : public Animal
{
	public:
		
		void Display()
		{
			SetData();
			
			cout << endl
			     << "Name : " << this->Name << endl
			     << "Age : " << this->Age << endl
			     << "Place of Origin : " << this->Birth << endl;
		}
		
};

class Zebra : public Animal
{
	public:
		
		void Display()
		{
			SetData2();
			
			cout << endl
			     << "Name : " << this->Name << endl
			     << "Age : " << this->Age << endl
			     << "Place of Origin : " << this->Birth << endl;
		}
		
};

int main()
{
	Dolphin animal1;
	Zebra animal2;
	
	animal1.Display();
	animal2.Display();
	
	
	return 0;
}






