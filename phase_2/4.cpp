#include<iostream>
using namespace std;

class Tringle
{
	public:
		int base = 56;
		int hight = 21,ans=0;
		int sum=0, temp=0;
		
		void Get_logic()
		{
			ans = (this->base * this->hight) / 2;
			
			cout << "Area of tringle  :  " << this->ans;
			
			while(ans != 0)
			{
				this->temp = this->ans % 10;
				this->sum = this->sum + temp;
				this->ans = this->ans / 10;
			}
			
			cout << endl << endl << "Sum of Digits  :  " << this->sum;
		}
};

int main()
{
	Tringle t1;
	
	t1.Get_logic();
	
	return 0;
}


