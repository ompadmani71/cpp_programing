#include<iostream>
#include<string.h>
using namespace std;

class String
{
	public:
		char str1[100],str2[100];
		
		void Set_Data()
		{
			cout << "Enter First String : ";
			fflush(stdin);
			gets(str1);
			
			cout << endl << "Enter second string : ";
			fflush(stdin);
			gets(str2);
		}
		
		int Cheak_str()
		{
			if(strcmp(str1,str2) == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};


int main()
{
	String s1;
	
	s1.Set_Data();
	
	cout << endl << endl << " --> " << s1.Cheak_str();
	
	return 0;
}

