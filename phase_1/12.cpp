#include<iostream>
using namespace std;

class Intrest
{
	private:
		int p,r,n;
		float Intrest;
		
	public:	
	
		void Setter()
		{
			cout << "Enter Price : ";
			cin  >> p;
			cout << "Enter Rate : ";
			cin >> r;
			cout << "Enter Time : ";
			cin >> n;
		}
		
		void Getter()
		{
			Intrest = (p * r * n) / 100;
			
			cout << endl << endl << "Simple Intrest : " 
			                     << Intrest << endl;
		}
};

int main()
{
	Intrest i1;
	
	i1.Setter();
	i1.Getter();
	
	return 0;
}

