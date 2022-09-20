#include<iostream>
#include<string.h>
using namespace std;

class String
{
	public:
		char str[100];
		int sum = 0,count=0;
		float avg;
		
		void SetData()
		{
			cout << "Enter String : ";
			gets(this->str);
			
			String::Cheak_wovel();
		}
		
		void Cheak_wovel()
		{
			for (int i = 0; str[i]!='\0'; i++)
			{
				if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
		            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
		            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
		            str[i] == 'U') 
				{
					sum = sum + str[i];
					count++;
				}
			}
			
			cout << endl << endl << "Total Wovels : " << count;
			avg = sum / count;
			
			if(avg >= 10 && avg <= 15)
			{
				cout << endl << endl << "Word is : SMOOHER";
			}
			else if(avg >= 15 && avg <= 30)
			{
				cout << endl << endl << "Word is : SOBER";
			}
			else if(avg >= 30)
			{
				cout << endl << endl << "Word is : HARDER";
			}
			else if(avg == 0)
			{
				cout << endl << endl << "Word is : GORGEOUS";
			}
		}
};

int main()
{
	String s1;
	
	s1.SetData();
	return 0;
}

