#include<iostream>
#include<string.h>
using namespace std;

class Solve
{
	public:
		float x;
		float a,b;
		
		void Setter()
		{
			cout << "Enter X : ";
			cin >> this->x;
			this->a = 2 * (x - 3);
			this->b = (4 * x) - 1;
		}
		
		void Answer()
		{
			if(a == b)
			{
				cout << endl << endl << "Quation Solved...";
			}
			else
			{
				cout << endl << endl << "Quation Not Solved...";
			}
		}
};

int main()
{
	Solve s1;
	
	s1.Setter();
	
	s1.Answer();
	return 0;
}


