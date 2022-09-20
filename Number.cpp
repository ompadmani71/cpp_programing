#include<iostream>
#include<stdio.h>
using namespace std;

class Number
{
	public:
		int n;
		
	Number()
	{
		cout << endl << "Enter Number : ";
		cin >> n;
	}
	
};

class Square : public Number
{
    public:
    	
    	Square()
    	{
    		int ans;
    		
    		ans = n * n;
    		cout << "Square of Number = " << ans <<endl;
		}
   	
};

class Cube : public Number
{
    public:
   	
   	Cube()
    	{
    		int ans;
    		
    		ans = n * n *n;
    		cout << "Cube of Number = " << ans;
		}
};

int main()
{
	Square s1;
	Cube c1;
}
