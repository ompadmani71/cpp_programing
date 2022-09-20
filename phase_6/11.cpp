#include<iostream>
#include<string.h>
using namespace std;

class Festival
{
	public:
		int m,d;
		
		void SetData()
		{
			cout << "Enter Month : ";
			cin >> this->m;
			
			cout << endl << "Enter Data : ";
			cin >> this->d;
		}
		
		void GetData()
		{
			cout << endl << endl << "Date : " << d << "/" << m << "/" << "2021" << endl << endl;
		
		
			if(d == 4 && m == 9)
			{
				cout << "Dewali";
			}
			else if(d == 28 && m == 3)
			{
				cout << "Holi";
			}
			else if(d == 7 && m == 10)
			{
				cout << "Navratri";
			}
			else if(d == 11 && m == 10)
			{
				cout << "Durgapuja";
			}
			else if(d == 15 && m == 10)
			{
				cout << "Dasera";
			}
			else if(d == 30 && m == 8)
			{
				cout << "Janmastmi";
			}
			else if(d == 10 && m == 9)
			{
				cout << "Ganesh chaturthi";
			}
			else if(d == 14 && m == 5)
			{
				cout << "Eid";
			}
			else if(d == 25 && m == 12)
			{
				cout << "Crismas";
			}
			else if(d == 11 && m == 3)
			{
				cout << "Mahashivratri";
			}
			else if(d ==22 && m == 8)
			{
				cout << "Rakshabandhan";
			}
			else if(d == 12 && m == 8)
			{
				cout << "Onam";
			}
			else if(d == 13 && m == 4)
			{
				cout << "Baishakhi";
			}
			else if(d ==19 && m == 9)
			{
				cout << "Gurupunam";
			}
			else if(d == 14 && m == 1)
			{
				cout << "Makarsakranti";
			}
			else if(d == 4 && m == 4)
			{
				cout << "Easter";
			}
			else if(d ==20 && m == 6)
			{
				cout << "Hemis";
			}
			else if(d == 10 && m == 11)
			{
				cout << "Chatpuja";
			}
			else if(d == 29 && m == 3)
			{
				cout << "Gangiar";
			}
			else if(d ==1 && m == 12)
			{
				cout << "Houn bill";
			}
			else
			{
				cout << "No Fastival..";
			}
		}
		
		
		
};

int main()
{
	Festival u1;
	
	u1.SetData();
	
	u1.GetData();
	
	return 0;
}
