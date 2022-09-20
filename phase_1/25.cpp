#include<iostream>
using namespace std;

class Maximum
{
	private:
		int n1,n2,n3,n4;
		
	public:
		
		void Setter()
		{
			cout << "Enter Four Number : " << endl;
			cin >> n1 >> n2 >> n3 >> n4;
		}
		
		void Get_logic()
		{
			(n1 > n2)	?(n1 > n3)	?(n1 > n4)	? cout << endl 
												  << "Number 1 is max"
												: cout << endl 
													   << "Number 4 is max"
												
									:(n3 > n4)	? cout << endl 
											   	  << "Number 3 is max"
												: cout << endl 
												  << "Number 4 is max"
												
						:(n2 > n3)	?(n2 > n4)	? cout << endl 
												  << "Number 2 is max"
												: cout << endl 
												  << "Number 4 is max"
												
									:(n3 > n4)	? cout << endl 
									              << "Number 3 is max"
												: cout << endl 
												  << "Number 4 is max";
		}
};

int main()
{
	Maximum m1;
	
	m1.Setter();
	m1.Get_logic();
	
	return 0;
}


