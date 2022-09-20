#include<iostream>
using namespace std;

class Reverse
{
	private:
		int n[3],p,rev[3] = {0,0,0},i;
		
	public:
	
		void Setter()
		{
			cout << "Enter 3 Number : ";
			
			for(i=0; i<3; i++)
			{
				cin >> n[i];
			}	
		}	
		
		void Reve()
		{
			for(i=0; i<3; i++)
			{
				while(n[i] != 0)
				{
					p = n[i] % 10;
					rev[i] = (rev[i]*10) + p;
					n[i] = n[i] / 10;
				}
			}
			
			for(i=0; i<3; i++)
				cout << "Reverce : " << rev[i] << endl;
		}
};

int main()
{
	Reverse r1;
	
	r1.Setter();
	r1.Reve();
	
	return 0;
}


