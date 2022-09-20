#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

	class Employe
	{
		private:
			
			int emp_id;
			char emp_name[100];
			char emp_role[100];
			long int emp_sal;
			int emp_exp;
			char emp_add[150];
			char emp_email[100];
			long int emp_con;
	 	
		public:
		
			void SetData()
			{
				cout << "Enter Employe id :  ";			fflush(stdin);		cin >> this->emp_id;
				cout << "Enter Employe Name : ";		fflush(stdin);		gets(this->emp_name);
				cout << "Enter Employe Role : ";		fflush(stdin);		gets(this->emp_role);
				cout << "Enter Employe Salary: ";		fflush(stdin);		cin >> this->emp_sal;
				cout << "Enter Employe Experience : ";	fflush(stdin);		cin >> this->emp_exp;
				cout << "Enter Employe Address : ";		fflush(stdin);		gets(this->emp_add);
				cout << "Enter Employe Email : ";		fflush(stdin);		gets(this->emp_email);
				cout << "Enter Employe Contact : ";		fflush(stdin);		cin >> this->emp_con;	fflush(stdin);
				
				
				
			} 	
			
			void GetData()
			{
				cout << "Id : " << this->emp_id << endl
				     << "Name : " << this->emp_name << endl
				     << "Role : " << this->emp_role << endl
				     << "Salary : " << this->emp_sal << endl
				     << "Experience : " << this->emp_exp << endl
				     << "Address : " << this->emp_add << endl
				     << "Email : " << this->emp_email << endl
				     << "Contect : " << this->emp_con << endl;
			}
			
	};
	
	
	
	int main()
	{
		int n,i;
		
		cout << "How many Employe ";
		cin >> n;
		
		Employe e[n];
		
		for(i=0; i<n; i++)
		{
				cout << endl << endl << "Employe  -  " << i+1 << endl;
			e[i].SetData();
		}
		
		for(i=0; i<n; i++)
		{
			cout << endl << endl << "Employe  -  " << i+1 << endl;
			e[i].GetData();
		}
		
		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
