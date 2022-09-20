#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	private:
		int stu_id;
		char stu_name[100];
		int stu_age;
		char stu_course[100];
		char stu_city[100];
		char stu_clg[100];
		
	public:
		void setData()
		{
			cout << "id : ";			fflush(stdin);		cin >> this->stu_id;
			cout << "Name : ";			fflush(stdin);		gets(this->stu_name);
			cout << "Age : ";			fflush(stdin);		cin >> this->stu_age;
			cout << "Course : ";		fflush(stdin);		gets(this->stu_course);
			cout << "Collage name : ";  fflush(stdin);      gets(this ->stu_clg);
			cout << "City : ";			fflush(stdin);		gets(this->stu_city);
		}
		
		void getData()
		{
			cout << "id : " << this->stu_id 
			     << "\tName : " << this->stu_name
			     << "\tAge : " << this->stu_age
			     << "\tCourse : " << this->stu_course
			     << "\tCity : " << this->stu_city 
			     << "\tCollage : " << this->stu_clg << endl;
		}
		

	
};


int main()
{
	int n,i;
	
	cout << "How many Student in your school :  ";		cin >> n;
	
    Student s[n];
	
	for(i=0; i<n; i++)
	{
		cout << endl << "student  " <<i+1 << endl;
		s[i].setData();
	}
	
	for(i=0; i<n; i++)
	{
		s[i].getData();
	}
	
	return 0;
}




















