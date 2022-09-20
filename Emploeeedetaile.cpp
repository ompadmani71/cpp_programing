#include<iostream>
using namespace std;

class EmployeeA
{
	public:
		int Id;
		char Name[100];
		char Role[100];
		long long int Salary;
		int Experience;
	static char Com_name[100];
	    char Address[100];
		char Email[100];
		long long int Contect;
		
		
	void SetDataA()
	{
		cout << "Id : " ;			fflush(stdin);	    cin >> this->Id;
		cout << "Name : ";			fflush(stdin);		gets(this->Name);
		cout << "Role : ";			fflush(stdin); 		gets(this->Role);	
		
	}		
};

class EmployeeB : public EmployeeA
{
		public:
			
		void SetDataB()
		{
			cout << "Salary : " ;		   fflush(stdin);  fflush(stdin); fflush(stdin); fflush(stdin);		cin >> this->Id;
			cout << "Experience : ";	   fflush(stdin);		cin >> this->Experience;
		}
};

class EmployeeC : public EmployeeB
{
		public:
			
		void SetDataC()
		{
			cout << "Address : ";			fflush(stdin); 		gets(this->Address);	
		}
		
		void GetDataC()
		{
			cout << endl << endl
			     << "Name : " << this->Name << endl
			     << "Role : " << this->Role << endl
			     << "Salary : " << this->Salary <<endl;
		}
};



class EmployeeD : public EmployeeC
{
		public:
			
		void SetDataD()
		{
			cout << "Enter Email : ";         fflush(stdin);		gets(this->Email);
			cout << "Enter Contect no. : ";   fflush(stdin);		    cin >>this->Contect;
		}
		
		void GetDataD()
		{
			cout << "id : " << this->Id;
			GetDataC();
			cout << "Experience : " << this->Experience << endl
			     << "Company Name : " << this->Com_name << endl
			     << "Address : " << this->Address << endl
			     << "Email : " << this->Email << endl
			     << "Contect : " << this->Contect << endl;
		}
};

char EmployeeA :: Com_name[100] = "RNW";

int main()
{
	int ch,n,i,j;
	
	cout << endl << "How Many Employee : ";
	cin >> n;
	
	EmployeeD Emp[n];
	
	for(i=0; i<n; i++)
	{
		cout << endl << i+1 << " Employee" << endl << endl;
		Emp[i].SetDataA();
		Emp[i].SetDataB();
		Emp[i].SetDataC();
		Emp[i].SetDataD();
	}
	
	for(i=0; i<n; i++)
	{
		Emp[i].GetDataD();
	}
}

