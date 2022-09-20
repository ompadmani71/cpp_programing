#include<iostream>
using namespace std;

class Tax_Calculator
{
	public:
		int price;
		float tax,calculator,total;
		
		Tax_Calculator()
		{
			cout << endl << "Enter Price : ";
			cin >> this->price;
			
			cout << "Enter Tax rate(%) : ";
			cin >> this->tax;
		}
		
		void Calculator()
		{
			calculator = price * (tax * 0.01);
			total = price + calculator;
			
			cout << endl << endl << "TAX : " << total;
		}
};

int main()
{
	Tax_Calculator t1;
	
	t1.Calculator();
	
	return 0;
}

