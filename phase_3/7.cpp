#include<iostream> 
#include<string.h>
using namespace std;

class St
{
	public:
		int i;
		
		void strup(char *str)
		{
			cout << endl << endl << "Upper case : "<< strupr(str);
		}
		
		void strlc(char *str)
		{
			cout << endl << endl << "Lower case : "<< strlwr(str);
		}
		
		void titcs(char *str)
		{
			if(str[0] >= 'A' && str[0] <= 'Z') 
			{
		        str[i] = str[i] + 32;
		    } 
		    else if(str[0] >= 'a' && str[0] <= 'z')
		    {
		    	str[i] = str[i] - 32;
		    }
		    
		    cout << endl << endl << "Title case : " << str;
		}
};

int main()
{
    char str[100];
    int i;
    St s1;
    
    cout << "Enter the String: ";
    gets(str);
  	
  
	for (i = 0; str[i]!='\0'; i++)
	{
	    if(str[i] >= 'A' && str[i] <= 'Z') 
		{
	        str[i] = str[i] + 32;
	    } 
	    else if(str[i] >= 'a' && str[i] <= 'z')
	    {
	    	str[i] = str[i] - 32;
	    }		
		
	}
	
	cout << "\nToggled string: "<< str;
	
	s1.strup(str);
	
	s1.strlc(str);
	
	s1.titcs(str);
  	
	return 0;
}
