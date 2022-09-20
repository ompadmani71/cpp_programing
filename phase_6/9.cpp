#include<iostream>
#include<string.h>
using namespace std;

class GST
{
	private:
		float price,pr;
		
	public:
		
		GST()
		{
			cout << "Enter price : ";
			cin >> this->price;
			
			GST::persentage();
		}
		
		void persentage()
		{
			cout << endl << endl << "1. 3%" << endl
			<< "2. 5%" << endl 
			<< "3. 12%" << endl
			<< "4. 18%" << endl 
			<< "5. 28%" << endl << endl;
		}
		void Tax_cal()
		{
			int ch;
			
			cout << endl << "Enter your choice : ";
			cin >> ch;
			
			cout << endl;
			
			switch(ch)
			{
				case 1: cout << "New Price with Tax : " << price + (price * (3.00/100.00));
					break;
					
				case 2: cout << "New Price with Tax : " << price + (price * (5.00/100.00));
					break;
					
				case 3: cout << "New Price with Tax : " << price + (price * (12.00/100.00));
					break;
					
				case 4: cout << "New Price with Tax : " << price + (price * (18.00/100.00));
					break;
					
				case 5: cout << "New Price with Tax : " << price + (price * (28.00/100.00));
					break;
			}
		}
	
};

int main()
{
	GST g1;
	
	g1.Tax_cal();
	return 0;
}

