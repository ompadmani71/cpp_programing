#include<iostream>
using namespace std;

class GST_Calculator
{
	private:
		int price,cost,gst,total;
		
	public:
		
		GST_Calculator()
		{
			cout << "Enter price : ";
			cin >> this->price;
			
			cout << "Enter cost : ";
			cin >> this->cost;
		}
		
		void Calculator()
		{
	
			gst =  (cost * price) / 100;
			total = price + gst;
					
			cout << endl << endl << "GST : " << gst
			     << endl << endl << "Include GST : " << total;
		}
		
};

int main()
{
	GST_Calculator g1;
	
	g1.Calculator();

	return 0;
}

