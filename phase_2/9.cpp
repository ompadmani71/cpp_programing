#include<iostream>
using namespace std;

class BMI
{
	private:
		int hight,wight,bmi=0;
		
	public:
		
		BMI()
		{
			cout << "Enter Hight : ";
			cin >> this->hight;
			
			cout << "Enter Wight : ";
			cin >> this->wight;
		}
		
		void Calculator()
		{
			bmi = this->wight / this->hight / 2;
			cout << endl << endl << "BMI  :  " << bmi;
		}
		
};

int main()
{
	BMI b1;
	
	b1.Calculator();

	return 0;
}

