#include<iostream>
#include<string.h>
using namespace std;

class Bill
{
	public:
		int unit;
		
		void SetData()
		{
			cout << "Enter Unit : ";
			cin >> this->unit;
		}
		
		int Cal_bill()
		{
			if(this->unit <= 100)
			{
				return unit * 10;
			}
			else if(this->unit <= 200)
			{
				return (unit - 100) + (100 * 10) * 15;
			}
			else if(this->unit <= 300)
			{
				return (100 * 10) + (100 * 15) + (unit - 200) * 20;
			}
			else if(this->unit > 300)
			{
				return (100 * 10) + (100 * 15) + (100 * 20) + (unit - 300) * 25;
			}
		}
};

int main()
{
	Bill p1;
	
	p1.SetData();
	
	cout << endl << endl << "Bill is : " << p1.Cal_bill() << endl;
	
	return 0;
}

