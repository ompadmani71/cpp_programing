#include<iostream>
#include<string.h>
using namespace std;

class String
{
	public:
		char a[100];
		int i;
	
	void Set_Str()
	{
		cout << "Enter Word : ";
		gets(a);
	}
	
	void finder()
	{
		
		cout << endl << endl << "Swift to Swift keys : ";
		
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]=='z' || a[i]=='x' || a[i]=='c' || a[i]=='v' || a[i]=='b' || 
			   a[i]=='n' || a[i]=='m' || a[i]=='<' || a[i]=='>' || a[i]==',' || 
			   a[i]=='.' || a[i]=='/' || a[i]=='?')
			{
				cout << a[i] << " ";
			}
		}
	}
};

int main()
{
	String s1;
	
	s1.Set_Str();
	s1.finder();
	
	return 0;
}

