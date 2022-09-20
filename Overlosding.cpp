#include<iostream>
#include<string.h>
using namespace std;

class Message 
{
	protected:
	
		char str[10];
};

class Overloaded : protected Message 
{
	public:
		
	Overloaded()
	{
		strcpy(this->str , "HELLO");
		cout << endl << "\t" << this->str << endl;
	}
	
	Overloaded(char str1[])
	{
		cout << endl << "\t" << str1;
	}
};

int main()
{
	char str1[100];
	
	cout << "Enter Message :\t ";
	gets(str1);
	
	Overloaded o1, o2(str1);
	
}
