#include<iostream>
#include<stdlib.h>
using namespace std;

class Stu
{
	private:
		int stu_id;
		char stu_name[100];
		int stu_age;
		char stu_cource[100];
		char stu_collage[100];
		char stu_email[100];
		
	public:
		void SetData()
		{
			cout << "stu_id : "; cin >> this->stu_id;
			cout << "Stu_name : "; fflush(stdin); gets(this->stu_name);
			cout << "Stu_age : "; cin >> this->stu_age;
			cout << "stu_cource : "; fflush(stdin); gets(this->stu_cource);
			cout << "stu_collage : "; fflush(stdin); gets(this->stu_collage);
			cout << "stu_email : "; fflush(stdin); gets(this->stu_email);
		}
		
		void GetData()
		{
			cout << endl << "student id : " << this->stu_id << endl 
			<< "Student name : " << this->stu_name << endl
			<< "Student age : " << this->stu_age << endl
			<< "Student cource : " << this->stu_cource << endl
			<< "Student collage : " << this->stu_collage << endl
			<< "Student email : " << this->stu_email;
		}
		
};
 
int main()
{
	Stu s[100];
	
	int n,i;
	
	cout << "How many Students : ";
	cin >> n;
	
	for(i=0;i<n;i++)
	{
		cout << endl << endl << "Enter student " << i+1 << " information" << endl << endl;
		s[i].SetData();
		system("CLS");
	}
	
	for(i=0;i<n;i++)
	{
		cout << endl << endl << "Student " << i+1 << " information" << endl << endl;
		s[i].GetData();
	}
	
	return 0;
}
