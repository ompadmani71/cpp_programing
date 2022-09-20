#include<iostream>
#include<string.h>
using namespace std;

class Tringle
{
	public:
		int a1,a2,a3;
		
		void SetData()
		{
			cout << "Enter First angle : ";
			cin >> a1;
			cout << endl << "Enter Second angle : ";
			cin >> a2;
			cout << endl << "Enter Third angle : ";
			cin >>a3;
			
			Tringle::Condition();
		}
		
		void Condition()
		{
			if(a1 > 90 || a2 > 90 || a3 > 90)
			{
				cout << endl << endl << "Obtuse tringle...";
			}
			else if(a1 == 90 || a2 == 90 || a3 == 90)
			{
				cout << endl << endl << "Right tringle...";
			}
			else if(a1 < 90 || a2 < 90 || a3 < 90)
			{
				cout << endl << endl << "Acute tringle...";
			}
		}
};

int main()
{
	Tringle t1;
	
	t1.SetData();
	
	return 0;
}

