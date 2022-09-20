#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

	class Student1
	{
		private:
			
			int stu_id;
			
		public:
		
			void SetData()
			{
				cout << "Enter Student id :  ";		cin >> this->stu_id;
			} 	
			
			void GetData()
			{
				cout << "Id : " << this->stu_id << endl;
			}
			
	};
	
	class Student2
	{
		private:
			
			char stu_name[100];
			
			Student1 s1;
			
		public:
		
		void SetData()
			{
				s1.SetData();
				cout << "Enter Student Name :  ";	fflush(stdin);	gets(this->stu_name);
			} 	
			
			void GetData()
			{
				s1.GetData();
				cout << "Name : " << this->stu_name << endl;
			}
				
		
		
	};
	
	
	
	int main()
	{
		int n,i;
		
		cout << "How many Student ";
		cin >> n;
		
		Student2 s[n];
		
		for(i=0; i<n; i++)
		{
				cout << endl << "Student  -  " << i+1 << endl;
			s[i].SetData();
		}
		
		for(i=0; i<n; i++)
		{
			cout << endl << endl << "Student  -  " << i+1 << endl;
			s[i].GetData();
		}
		
		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
