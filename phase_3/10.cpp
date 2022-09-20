#include<iostream>
#include<string.h>
using namespace std;

class User
{
	public:
		char str[100],str2[100];
		
		void SetData()
		{	
			cout << "Enter Any string : ";
			gets(this->str);
		}
		
		void Peli()
		{
			strcpy(this->str2,this->str);
			
			strrev(this->str);
					
			if(strcmp(this->str2,this->str) == 0)
			{
				cout << endl << endl << "This word As same as front of mirror..";
			}
			else
			{
				cout << endl << endl << "Not same on mirror..";
			}
		}
};

int main()
{
	User u1;
	
	u1.SetData();
	u1.Peli();
	
	return 0;
}

