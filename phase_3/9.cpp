#include<iostream>
#include<string.h>
using namespace std;

class User
{
	public:
		char str[1000];
		
		void SetData()
		{	
			cout << "Enter Any string : ";
			gets(str);
			
			cout << endl << endl << "New Username : ";
		}
		
		void extract()
		{
			for(int i = 0; str[i]!='\0'; i++)
			{
				if(str[i] >= 'A' && str[i] <= 'Z') 
				{
					cout << str[i];
				}
				else if(str[i] >= 'a' && str[i] <= 'z')
				{
					cout << str[i];
				}
				else if(str[i] >= '0' && str[i] <= '9')
				{
					continue;
				}
				else
				{
					continue;
				}
			}
		}
};


int main()
{
	User u1;
	
	u1.SetData();
	
	u1.extract();
	
	return 0;
}

