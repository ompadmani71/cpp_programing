#include<iostream>
#include<math.h>
using namespace std;

// E = (P.r.(1+r)n) / ((1+r)n – 1) 
class EMI_Calculator
{
	public:
		float p,r,n;
		float emi=0;
		
		EMI_Calculator()
		{
			cout << endl << "Enter Principle : ";
			cin >> this->p;
			
			cout << "Enter Persantage : ";
			cin >> this->r;
			
			cout << "Enter Time : ";
			cin >> this->n;
		}
		
		void Calculator()
		{
			r = r / (12 * 100);
			n = n * 12;
			
			emi = (p * r * pow(1+r,n) ) / (pow (1+r,n) - 1);
			
			cout << endl << endl << "EMI : " << emi;
		}
};

int main()
{
	EMI_Calculator e1;
	
	e1.Calculator();
	
	return 0;
}

