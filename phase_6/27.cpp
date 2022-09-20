#include<iostream>
#include<string.h>
using namespace std;

class RBI
{
	public:
		void Bank()
		{
			cout << endl << "Reserve bank Intrest rate is 7% " << endl;
		}
};

class BOB : public RBI
{
	public:
		void Bank()
		{
			cout << endl << "Bank of baroda Intrest rate is 7.5% " << endl;
		}
};

class SBI : public RBI
{
	public:
		void Bank()
		{
			cout << endl << "State Bank of india Intrest rate is 8% " << endl;
		}
};

class PNB : public RBI
{
	public:
		void Bank()
		{
			cout << endl << "Panjab National Bank Intrest rate is 7.2% " << endl;
		}	
};

int main()
{
	BOB b1;
	b1.Bank();
	
	SBI s1;
	s1.Bank();
	
	PNB p1;
	p1.Bank();
	
	return 0;
}

