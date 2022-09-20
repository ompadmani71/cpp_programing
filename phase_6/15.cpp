#include<iostream>
#include<string.h>
using namespace std;

class Solar
{
	public:
		int cost;
		float sub=0,total=0,Tax=0,AD = 0;
		
		void SetData()
		{
			cout << "Enter your cost : ";
			cin >> this->cost;
		}
		
		void Apply_aid()
		{
			cout << endl << endl << "Cost of Solar : " << this->cost << endl;
			
			sub = (float)(cost) * (30.00 / 100.00);
			cout << endl << "Subsidy : " << sub << endl;
			
			total = cost - sub;
			cout << endl << "Cost After subsidy : " << total << endl;
			
			AD = total * (80.00 / 100.00);
			cout << endl << "Accelerated Depreciation 80%(AD) : " << AD << endl;
			
			Tax = AD * (35.00 / 100.00);
			cout << endl << "Tax rate saved after AD (35%) : " << Tax << endl;
			
			cout << endl << endl << "Net cost after Subsity and AD saving : " << total - Tax;
		}
};

int main()
{
	Solar s1;
	
	s1.SetData();
	
	s1.Apply_aid();
	
	return 0;
}

