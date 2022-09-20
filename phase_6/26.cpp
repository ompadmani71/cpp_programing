#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

class P
{
	public:
	
			int emp_id;
			char emp_name[100];
			char emp_role[100];
			int emp_salary;
			int emp_exp;
			char emp_company_name[100];
			char emp_city[100];
			char emp_email[100];
			int emp_age;
			
			void Set_Data()
			{
				cout << "emp_id : "; cin >> this->emp_id;
				cout << "emp_name : "; fflush(stdin); gets(this->emp_name);
				cout << "emp_age : "; fflush(stdin); cin >> this->emp_age;
			}
			
};

class Q : public P
{
	public:
			void Set_Data1()
			{
				cout << "emp_role : "; fflush(stdin); gets(this->emp_role);
				cout << "emp_exp : "; cin >> this->emp_exp;
				cout << "emp_salary : "; cin >> this->emp_salary;
			}
		
};

class R : public Q
{
	public:
			void Set_Data2()
			{
				cout << "emp_email : "; fflush(stdin); gets(this->emp_email);
				cout << "emp_company_name : "; fflush(stdin); gets(this->emp_company_name);
				cout << "emp_city : "; fflush(stdin); gets(this->emp_city);
			}
			void Get_Data()
			{
				cout << endl << endl << "Employee id : " << this->emp_id << endl;
				cout << "Employee name : " << this->emp_name << endl
				<< "Employee role : " << this->emp_role << endl;
				
			}
		
};

class S : public R
{
	public:
			void Set_Data3()
			{
				Set_Data();
				Set_Data1();
				Set_Data2();
				
				
			}
			
			void Get_Data1()
			{
				Get_Data();
				cout << "Employee expirence : " << this->emp_exp << endl
				<< "Employee salary : " << this->emp_salary << endl
				<< "Employee company name : " << this->emp_company_name << endl
				<< "Employee city : " << this->emp_city << endl
				<< "Employee email : " << this->emp_email << endl
				<< "Employee age : " << this->emp_age << endl << endl;
			}
		
};

int main()
{
	S emp[100];
	int n,i;
	
	cout << "How many employees : ";
	cin >> n;
	
	for(i=1;i<=n;i++)
	{
		cout << endl << "Enter " << i << " Employee details : " << endl << endl;
		emp[i].Set_Data3();
		system("CLS");
	}
	
	for(i=1;i<=n;i++)
	{
		cout << endl << "Employee " << i << " details : " << endl << endl;
		emp[i].Get_Data1();
	}
	
	return 0;
}

