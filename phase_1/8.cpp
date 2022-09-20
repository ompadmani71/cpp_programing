#include<iostream>
using namespace std;

class Sum
{
	public:
		
		int feet;
		int inch;	
		
	void Setter()
	{
		cout << "Enter inches : ";
		cin >> inch; 
		
		while(inch >= 12)
		{
			feet++;
			inch -= 12;
		}
	}
	
	void Getter()
	{
		cout << endl << "Feets : " << feet << endl 
		             << "Inches : " << inch;
	}
};

int main()
{
	Sum s1;
	
	s1.Setter();
	
	s1.Getter();
	
	return 0;
}

