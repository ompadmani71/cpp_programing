#include<iostream>
#include<string.h>
using namespace std;
class Bus
{
	public:
		int d1,t1,t2;
		float velo,velo2;
		
		void B1()
		{
			d1 = 1933;
			t1 = 40;
			
			velo = d1 / t1;
			
			cout << endl << endl << "velocity of bus 1 : " << velo;
		}
		
		void B2()
		{
			t2 = 46;
			
			velo2 = d1 / t2;
			
			cout << endl << endl << "velocity of bus 2 : " << velo2;
		}
};

class Velocity : public Bus
{
	public:
		Velocity()
		{
			B1();
			B2();
		}
		
};

int main()
{
	Velocity v1;

	return 0;
}

