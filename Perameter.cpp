#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class City
{
	public:
		int id;
		char name[100];
	
	City(int id, char name[100])
	{
		this->id = id;
		strcpy(this->name , name);
	}
	void GetData()
	{
		cout << "Id : " << this->id 
		     << "Name : " << this->name;
	}
	
};

int main()
{
	City c1(1,"Om Padmani");
	
	c1.GetData();
	
return 0;

}


