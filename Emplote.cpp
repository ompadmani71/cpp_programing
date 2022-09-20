#include<iostream>
#include<stdio.h>
using namespace std;

class Employee
{
	public:
		int id;
		char name[100];
		
	void SetData()
	{
		cout << "Enter Id : ";
		cin >> this->id;
		
		cout << "Enter Name : ";
		fflush(stdin);
		gets(this->name);
	}
	
};

class employee2 : public Employee
{
    public:
    	int salary;
    	int age;
    	
    employee2()
	{
		SetData();
		
		cout << "Enter Salary;  :";
		cin >> this->salary; 
		
		cout << "Enter Age : ";
		cin >> this->age;
	}	
	
	void GetData()
	{
		cout << endl << "Id : " << this->id << endl
				     << "Name : " << this->name << endl
				     << "Salary: " << this->salary << endl
				     << "Age : " << this->age;
	}     
		
};

int main()
{
	employee2 e1;

	e1.GetData();
}
