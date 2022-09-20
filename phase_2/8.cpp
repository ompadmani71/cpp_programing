#include<iostream>
using namespace std;

class Converter
{
	private:
		
		int n,binary,b[100],base=1,i;
		
	public:
		
		Converter()
		{
			cout << "Enter Desimal Value : ";
			cin >> this->n;
		}
		
		void Setter()
		{
			for(i=0; n!=0; i++)
			{
				b[i] = n % 2;
				n = n / 2;
			}
		}
		
		void Binary()
		{
			Setter();
			cout << endl << endl << "Binery : ";
			
			for(i=i-1; i>=0; i--)
			{
				cout << this->b[i];
			}
		}
};

int main()
{
	
	Converter c1;
	
	c1.Binary();
	
	return 0;
}


