#include<iostream>
using namespace std;

//char* pat(char f)

void pat(int c, char f)
{
	int i;
	cout << endl 
	     <<"---------------------------------------------" << endl
	     <<"-                                           -" << endl
	     <<"-                                           -" << endl
	     <<"-                                           -" << endl
	     <<"-                                           -" << endl
	     <<"-"  << f                                  <<"-"<< endl     
	     <<"-                                           -" << endl
	     <<"-                                           -" << endl
	     <<"-                                           -" << endl
	     <<"-                                           -" << endl
	     <<"---------------------------------------------" << endl;
}
void addition(int a, int b, char f)
{
	int c;
	c = a + b;
	pattern(c,f);	
	cout << "Add is " << c;
}

void subtraction(int a, int b, char f)
{
	int c;
	c = a - b;
	pattern(c, f);	
	cout << "Subtraction is " << c;
}

void multipaction(int a, int b, char f)
{
	int c;
	c = a * b;
	pattern(c,f);	
	cout << "Multipaction is " << c;
} 

void division(int a, int b, char f)
{
	int c;
	c = a / b;
	pattern(c, f);	
	cout << "Division is " << c;
}

	int main()
	{
		int ch,n1,n2,i;
		char a[] = "Add";
		char b[] = "Sub";
		char c[] = "Mul";
		char d[] = "Div";
		char f[];
		
		
		cout << "Enter your choice" << endl << endl;
		
		cout << "Press 1 for Addition" <<endl 
		     << "Press 2 for Subtraction" << endl 
			 << "Press 3 for Multipaction" << endl 
			 << "Press 4 for Division" << endl
			 << "Press 0 for Exit" << endl;
        cin >> ch;
		
		cout << "Enter a and b value";
		cin >> a >> b;
		switch(ch)
		{
		case 1:
			
			for(i=0; a[i] != '\0'; i++)
			{
				f[i] = a[i];
			}
			addition(a,b,char* f);
			break;
			
		case 2:
		
		    for(i=0; a[i] != '\0'; i++)
			{
				f[i] = b[i];
			}
			subtraction(a,b,char* f);
			break;
			
		case 3:
		    
		    for(i=0; a[i] != '\0'; i++)
			{
				f[i] = c[i];
			}
			multipaction(a,b,char f);
			break;
			
		case 4:
		    
		    for(i=0; a[i] != '\0'; i++) 
			{
				f[i] = d[i];
			}
			division(a,b,char f);
			break;
			
		case 0:
		
		    break;			
		
		default:
		    
//			cout << Invaild choice;
            break;
			
     	}
	}
