#include<iostream>
#include<string.h>
using namespace std;

class Company
{
	public:
		long int profit = 78000, kaju = 123500, time = 1;
		
		void data()
		{
			cout << endl << "Cashews sells : " << kaju << endl << endl;
			cout << "Profit : " << profit << endl << endl;
			cout << "Duration : " << time << endl << endl;
			
			Company::update();
		}
		
		void update()
		{
			cout << endl << "After 3 month of time with 10X production : " << endl << endl;
			
			profit = profit * 3 * 10;
			
			cout << endl << "New Profit is : " << profit << endl << endl;
			cout << "Production Rate increase : " << "300X" << endl;
		}
		
};

int main()
{
	Company p1;
	
	p1.data();
	
	return 0;
}

