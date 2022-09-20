 /*WAP to create two class HighSchool and College with fields
  like id, stu_name, stu_roll_no, stu_standard, stu_age, stu_contact, 
  stu_edu_institute_name and stu_address. Make suitable setter and getter with use 
  of static data members.*/
  
#include<iostream>
#include<stdio.h>
using namespace std;

class High_School
{
	public:
		
		int stu_id;
		char stu_name[100];
		int stu_roll_no;
		int stu_std;
		int stu_age;
		long int stu_contact;
		char add[100];
		static char school_name[100];
	
	public:
		
		void SetData()
		{
			cout << "Enter Student id : "; 			fflush(stdin); 		cin >> this->stu_id;
			cout << "Enter Student Name : "; 		fflush(stdin); 		cin >> this->stu_name;
			cout << "Enter Student Roll No. : "; 	fflush(stdin); 		cin >> this->stu_roll_no;
			cout << "Enter Student Standard : "; 	fflush(stdin); 		cin >> this->stu_std;
			cout << "Enter Student Age : "; 		fflush(stdin); 		cin >> this->stu_age;
			cout << "Enter Student Contect no. : ";	fflush(stdin); 		cin >> this->stu_contact;
			cout << "Enter Student Address : "; 	fflush(stdin); 		cin >> this->add;
		}
		
		void GetData()
		{
			cout << endl << "id : " << this->stu_id << endl
			             << "Name : " << this->stu_name << endl
			             << "Roll no. : " << this->stu_roll_no << endl
			             << "Standard : " << this->stu_std << endl
			             << "Age : " << this->stu_age  << endl
			             << "Contect : " << this->stu_contact << endl
			             << "School : "  << this->school_name << endl
			             << "Address : " << this->add << endl;
			              
		}
		
		
	
};

class College
{
	private:
		
		int stu_id;
		char stu_name[100];
		int stu_roll_no;
		int stu_std;
		int stu_age;
		long int stu_contact;
		char add[100];
	
	public:	
		static char college_name[100];
		
		void SetData()
		{
			cout << "Enter Student id : "; 			fflush(stdin); 		cin >> this->stu_id;
			cout << "Enter Student Name : "; 		fflush(stdin); 		gets(this->stu_name);
			cout << "Enter Student Roll No. : "; 	fflush(stdin); 		cin >> this->stu_roll_no;
			cout << "Enter Student Standard : "; 	fflush(stdin); 		cin >> this->stu_std;
			cout << "Enter Student Age : "; 		fflush(stdin); 		cin >> this->stu_age;
			cout << "Enter Student Contect no. : ";	fflush(stdin); 		cin >> this->stu_contact;
			cout << "Enter Student Address : "; 	fflush(stdin); 		gets(this->add);
		}
		
		void GetData()
		{
			cout << endl << "id : "       << this->stu_id << endl
			             << "Name : "     << this->stu_name << endl
			             << "Roll no. : " << this->stu_roll_no << endl
			             << "Standard : " << this->stu_std << endl
			             << "Age : "      << this->stu_age  << endl
			             << "Contect : "  << this->stu_contact << endl
			             << "College : "  << this->college_name << endl
			             << "Address : "  << this->add << endl;
			              
		}
		
		
	
};

  char High_School ::  school_name[100] = "RNW";
  char College :: college_name[100] = "RNWIT";


	
int main()
{
	High_School h1;
	College c1;
	
	h1.SetData();
	c1.SetData();
	
	h1.GetData();
	c1.GetData();
	
	
}



















