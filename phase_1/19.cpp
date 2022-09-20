#include<iostream>
using namespace std;

class Table
{
	private:
		int i,n;
		
	public:
		void Setter()
		{
			cout << "Enter Table Number (1 to 10) : ";
			cin >> n;
		}
		
		void Getter()
		{
			if(n <=10)
			{
				cout << endl << endl << "Table of " << n << " is :" << endl << endl;
				
				for(i=1; i<=10; i++)
				{
					cout << n << "  " 
						 << i << "  " 
						 << n*i << endl;
				}
			}
			else
			{
				cout << endl << "Sorry You enter Gretter 10"; 
			}
		}
};

int main()
{
	Table t1;
	
	t1.Setter();
	t1.Getter();
	
	return 0;
}


