#include<iostream>
using namespace std;

class Sum
{
	private:
		int n,temp,i,sum=0;
		
	public:
		
		void Setter()
		{
			cout << "Enter any Number : ";
			cin >> n;
			
			temp = n;
		}
		void Getter()
		{
			while(n != 0)
			{
				i = n % 10;
				sum = sum + i;
				n = n / 10;
			}
			
			cout << endl << endl << "Sum of Digit is  : " << sum << endl;
		}
			
};

int main()
{
	Sum s1;
	
	s1.Setter();
	
	s1.Getter();
	
	return 0;
}


