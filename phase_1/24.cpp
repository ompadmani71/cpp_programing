#include<iostream>
#include<string.h>
using namespace std;

class Palindrom
{
	private:
		char str[100],str1[100];
		
	public:
		
		void Setter()
		{
			cout << "Enter any Msg. : ";
			fflush(stdin);
			gets(str);
			
			strcpy(str1,str);
			strrev(str1);
		}
		
		void Pelidomnal_data()
		{
			if(strcmp(str1,str) == 0)
			{
				cout << endl << endl << "String is Pelidomanal..." << endl;
			}
			else
			{
				cout << endl << endl << "string is not a pelidomnal..." << endl;
			}
		}
};

int main()
{
	Palindrom p1;
	
	p1.Setter();
	p1.Pelidomnal_data();
	
	return 0;
}


