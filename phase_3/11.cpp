#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Cyphertext
{
	public:
		char str[100];
		
		void SetData()
		{	
			cout << endl << endl << "Enter Any string : ";
			fflush(stdin);
			gets(str);
		}
		
		void con_text()
		{
			cout << endl << endl << "Encoded Massage : ";
			
			for(int i = 0; str[i]!='\0'; i++)
			{
				if(str[i] >= 'a' && str[i] <= 'w')
				{
					cout << (char)(str[i] + 3);
				}
				else if(str[i] >= 'x' && str[i] <= 'z')
				{
					cout << (char)(str[i]-23);
				}
			}
			
		}
		
		void pro_lan()
		{
			cout << endl << endl << "Decoded Massage : ";
			for(int i = 0; str[i]!='\0'; i++)
			{
				if(str[i] >= 'd' && str[i] <= 'z')
				{
					cout << (char)(str[i] - 3);
				}
				else if(str[i] >= 'a' && str[i] <= 'c')
				{
					cout << (char)(str[i]+23);
				}
			}
		}
};

int main()
{
	int ch;
	
	Cyphertext u1;
do
{	
//	system("CLS");
	
	cout << endl << endl << endl << "1. Encode Massage" << endl
	<< "2. Decode Massage" << endl
	<< "0. Exit";
	
	cout << endl << endl << "Enter your choice : ";
	cin >> ch;

	switch(ch)
	{
		system("CLS");
		case 1:
				u1.SetData();
				u1.con_text();
				
			break;
			
		case 2:
				u1.SetData();
				u1.pro_lan();
			break;
			
		default : cout << endl << "Invalid choice..!";
	}
}
while(ch != 0);

	return 0;
}

