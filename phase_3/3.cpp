#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class Log
{
	public:
		char email[100];
		char pass[100];
		int lc=0,up=0,digit=0,s=0,special=0,i;
		
		void reg()
		{
			cout << endl << endl << "Enter Email : ";
			fflush(stdin);
			gets(this->email);
password:			
			cout << endl << "Enter Password : ";
			gets(this->pass);
			
			// password Critria
			for(i=0; pass[i]!='\0'; i++)
			{
				if(pass[i] >= 'a' && pass[i] <= 'z')
				{
					lc++;
				}
				else if(pass[i] >= 'A' && pass[i] <= 'Z')
				{
					up++;
				}
				else if(pass[i] >= '0' && pass[i] <= '9')
				{
					digit++;
				}
				else if(pass[i] == ' ')
				{
					s++;
				}
				else
				{
					special++;
				}
			}
			
			if(lc != 0 && up!=0 && digit!=0 && special!=0)
			{
				cout << endl << endl << "Register success...";
				system("pause>null");
			}
			else
			{
				cout << endl << "Make a strong Password...";
				system("pause>null");
				cout << endl << endl;
				goto password;	
			}
		}
			
		
};

int main()
{
	Log u[100];
	int ch,i;
	int num = 1,flag=0;
	char t_email[100],t_pass[100];
	
start:	
		system("CLS");
		cout << endl << "1. RAGISTER" << endl
		<< "2. LOGIN" << endl
		<< "3. Delet" << endl 
		<< "0. EXIT" << endl << endl;
		
		cout << "Enter Your choice : ";
		cin >> ch;
		
		switch(ch)
		{
			case 1: u[num].reg();
					num++;
					goto start;
				break;
				
			case 2:
					cout << endl << endl << "Enter Email : ";
					fflush(stdin);
					gets(t_email);
								
					cout << endl << "Enter Password : ";
					fflush(stdin);
					gets(t_pass);
					
					// login critria
					for(i=1;i<=num;i++)
					{
						if(strcmp(t_email,u[i].email) == 0)
						{
							if(strcmp(t_pass,u[i].pass) == 0)
							{
								cout << endl << endl << "Login success...";
								system("pause>null");
								goto start;
							}
							else
							{
								flag = 2;
							}
						}
						else
						{
							flag = 1;
						}
					}
					
					if(flag == 1 || flag == 2)
					{
						cout << endl << endl << "Enter Valid Email or Pasword...";
						system("pause>null");
						goto start;
					}
					
				break;
				
			case 3:
					cout << endl << endl << "Enter Email : ";
					fflush(stdin);
					gets(t_email);
								
					cout << endl << "Enter Password : ";
					fflush(stdin);
					gets(t_pass);
					
					// delet account
					for(i=1;i<=num;i++)
					{
						if(strcmp(t_email,u[i].email) == 0)
						{
							if(strcmp(t_pass,u[i].pass) == 0)
							{
								
								strcpy(u[i].email,"NULL");
								
								strcpy(u[i].pass,"NULL");
								cout << endl << endl << "Delet success...";
								
								system("pause>null");
								goto start;
							}
							else
							{
								flag = 2;
							}
						}
						else
						{
							flag = 1;
						}
					}
					
					if(flag == 1 || flag == 2)
					{
						cout << endl << endl << "Enter Valid Email or Pasword...";
						system("pause>null");
						goto start;
					}
				
				break;
				
			default : exit(0);
	 	}
	
	return 0;
}

