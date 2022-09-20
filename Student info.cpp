#include<iostream>
#include<stdio.h>
using namespace std;

class Student
{
	public:
		
		int stu_id;
		char stu_name[100];
		int stu_age;
		char stu_course[100];
		char stu_city[100];
	
};

int main()
{
	Student s1;
	Student s2;
	Student s3;
	Student s4;
	Student s5;
	
	cout << "\t Student 1" << endl << endl;
	
	cout << "Enter student id:- " << endl;
	cin >> s1.stu_id; 

	cout << "Enter student name:-" <<endl;
	fflush(stdin);
    gets(s1.stu_name);
	
	cout << "Enter student age:-" <<endl;
	cin >> s1.stu_age;
	
	cout << "Enter student course:-" << endl;
	fflush(stdin);
	gets(s1.stu_course);
     
    cout << "Enter student city:-" << endl;
	fflush(stdin);
	gets(s1.stu_city);
	
	
	
	cout << "\t Student 2" << endl << endl;
	
	cout << "Enter student id:- " << endl;
	cin >> s2.stu_id; 

    cout << "Enter student name:-" <<endl;
	fflush(stdin);
    gets(s2.stu_name);
	
	cout << "Enter student age:-" <<endl;
	cin >> s2.stu_age;
	
	cout << "Enter student course:-" << endl;
	fflush(stdin);
	gets(s2.stu_course);
     
    cout << "Enter student city:-" << endl;
	fflush(stdin);
	gets(s2.stu_city);
	
	
	
	cout << "\t Student 3" << endl << endl;
	
	cout << "Enter student id:- " << endl;
	cin >> s3.stu_id; 

	
	cout << "Enter student name:-" <<endl;
	fflush(stdin);
    gets(s3.stu_name);
	
	cout << "Enter student age:-" <<endl;
	cin >> s3.stu_age;
	
	cout << "Enter student course:-" << endl;
	fflush(stdin);
	gets(s3.stu_course);
     
    cout << "Enter student city:-" << endl;
	fflush(stdin);
	gets(s3.stu_city);
	
	
	cout << "\t Student 4" << endl << endl;
	
	cout << "Enter student id:- " << endl;
	cin >> s4.stu_id; 

	
	cout << "Enter student name:-" <<endl;
	fflush(stdin);
    gets(s4.stu_name);
	
	cout << "Enter student age:-" <<endl;
	cin >> s4.stu_age;
	
	cout << "Enter student course:-" << endl;
	fflush(stdin);
	gets(s4.stu_course);
     
    cout << "Enter student city:-" << endl;
	fflush(stdin);
	gets(s4.stu_city);
	
	
	cout << "\t Student 5" << endl << endl;
	
	cout << "Enter student id:- " << endl;
	cin >> s5.stu_id; 

	
	cout << "Enter student name:-" <<endl;
	fflush(stdin);
    gets(s5.stu_name);
	
	cout << "Enter student age:-" <<endl;
	cin >> s5.stu_age;
	
	cout << "Enter student course:-" << endl;
	fflush(stdin);
	gets(s5.stu_course);
     
    cout << "Enter student city:-" << endl;
	fflush(stdin);
	gets(s5.stu_city); 
	
	
//	cout << ""
	
	
	
	
	
//	cout << "id: " << s1.stu_id ;
//	cout << "  Name: " << s1.stu_name ;
//	cout << "  age: " << s1.stu_age ;
//	cout << "  course: " << s1.stu_course ;
//	cout << "  city: " << s1.stu_city ; 
	
	cout <<"------------------------------------------" << endl
	<< " id  |  name  |  age  |  course  |  city |" << endl
	<< "|-----------------------------------------|" << endl
	<< "| " << s1.stu_id << " | " << s1.stu_name << " | " << s1.stu_age << " | " << s1.stu_course << " | " << s1.stu_city << " | " << endl
    << "| " << s2.stu_id << " | " << s2.stu_name << " | " << s2.stu_age << " | " << s2.stu_course << " | " << s2.stu_city << " | " << endl
	<< "| " << s3.stu_id << " | " << s3.stu_name << " | " << s3.stu_age << " | " << s3.stu_course << " | " << s3.stu_city << " | " << endl
    << "| " << s4.stu_id << " | " << s4.stu_name << " | " << s4.stu_age << " | " << s4.stu_course << " | " << s4.stu_city << " | " << endl
    << "| " << s5.stu_id << " | " << s5.stu_name << " | " << s5.stu_age << " | " << s5.stu_course << " | " << s5.stu_city << " | " << endl
	<< "-------------------------------------------";
	
	 
	
}

/*
  ------------------------------------------
 | id  |  name  |  age  |  course  |  city |
 |-----------------------------------------|
 |     |        |       |          |       |
 |     |        |       |          |       |
 |	   |        |       |          |       | 
 |     |        |       |          |       |
 |     |        |       |          |       | 
 -------------------------------------------
*/

















