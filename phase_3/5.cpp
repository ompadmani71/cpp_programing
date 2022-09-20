#include<iostream>
#include<string.h>
using namespace std;

class Extrect
{
	private:
		char str[50];
		int vowels=0, consonant=0, digit=0, space=0,s=0;
	    int i;
		
	public:
		void SetData()
		{
			cout << "Enter any string : ";
			gets(str);
		}
		
		void Ext()
		{
			for (i = 0; str[i] != '\0'; i++) 
			{
		        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
		            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
		            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
		            str[i] == 'U') 
				{
		            ++vowels;
		        } 
				else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
				{
		            ++consonant;
		        } 
				else if (str[i] >= '0' && str[i] <= '9') 
				{
		            ++digit;
		        } 
				else if (str[i] == ' ') 
				{
		            ++space;
		        }
		        else
		        {
		        	++s;
				}
		    }
		}
		
		void GetData()
		{
			cout << endl << endl << "Vowels : " << vowels << endl
			<< "Consonant : " << consonant << endl
			<< "Digit : " << digit << endl
			<< "Space : " << space << endl
			<< "Special Symbol : " << s << endl;
		}
		
};

int main()
{
	Extrect e1;
	
	e1.SetData();
	
	e1.Ext();
	
	e1.GetData();
	return 0;
}

