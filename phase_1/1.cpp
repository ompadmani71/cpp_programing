#include<iostream>
#include<string.h>
using namespace std;

class Cub
{
	public:
		Cub(int n)
		{
			cout << endl << endl << "Cub of Number is : " << n*n*n;
		}
};

int main()
{
	int num;
	
	cout << "Enter Any number : ";
	cin >> num;
	
	Cub o1(num);
	
	return 0;
}
