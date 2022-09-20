#include<iostream>
using namespace std;

class Fibonacci
{
	private:
		int n1=0,n2=1,n3,num,i;
		
	public:
		
		void Setter()
		{
			cout << "Enter Last Limit : ";
			cin >> num;
		}
		
		void Get_logic()
		{
			cout << "Febonacci Series : " << n1 << " " << n2 << " ";
			
			for(i=2; i<num; i++)
			{
				n3 = n1 + n2;
				cout << n3 << " ";
				n1 = n2;
				n2 = n3;
			}
		}
};

int main()
{
	Fibonacci f1;
	
	f1.Setter();
	f1.Get_logic();
	return 0;
}


