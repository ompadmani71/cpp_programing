#include<iostream>
#include<string.h>
using namespace std;

class Rev
{
	public:
		char str[100];
		int count=0;
		
		Rev()
		{
			cout << "Enter String : ";
			gets(this->str);
		}
		
		void GetData()
		{
			for(int i=0;str[i]!='\0';i++)
			{
				count++;
			}
			
			if(3 < count && count < 9)
			{
				strrev(str);
				cout << endl << endl << "Strint in reverce : " << str;
			}
			else
			{
				cout << endl << endl << "Your String Lenght not between  3 to 9...";
			}
		}
};

int main()
{
	Rev r1;
	
	r1.GetData();
	
	return 0;
}

