#include<iostream>
#include<string.h>
using namespace std;

class Marge
{
	public:
		char f_name[30],f_pass[30];
		char l_name[30],l_pass[30];
		char temp_id[30];
		
		void first_name()
		{
			cout << "Enter First Name : ";
			fflush(stdin);
			gets(this->f_name);
			cout << "Enter Pasword id : ";
			fflush(stdin);
			gets(this->f_pass);
		}
		
		void last_name()
		{
			cout << endl << endl << "Enter Last Name : ";
			fflush(stdin);
			gets(this->l_name);
			cout << "Enter Pasword id : ";
			fflush(stdin);
			gets(this->l_pass);
		}
		
		void name_Marge()
		{
			
			cout << endl << endl << "Enter Id for marge : ";
			gets(this->temp_id);
			
			if(strcmp(this->l_pass,this->temp_id) == 0)
			{
				strcat(f_name,l_name);
				cout << endl << endl;
				cout << "Name Marged : " << this->f_name;
			}
			else
			{
				cout << endl << "No id found...";
			}
			

		}
	
};

int main()
{
	
	Marge t;
	
	t.first_name();
	t.last_name();
	
	t.name_Marge();
	return 0;
}

