#include<iostream>
using namespace std;

class Number
{
	private:
		int Base;
		int Power;
		int i=1,num=1;
		
	public:
		
		void Setter()
		{
			cout << "Enter Base : ";
			cin >> Base;
			
			cout << "Enter Power : ";
			cin >> Power;
			
			while(i <= Power)
			{
				num = num * Base; 
				i++;
			}
		}
		
		void Getter()
		{
			cout << endl << "Power of number : " << num << endl;
		}
		
};

int main()
{
	Number n1;
	
	n1.Setter();
	n1.Getter();
	
	return 0;
}


