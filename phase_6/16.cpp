#include<iostream>
#include<string.h>
using namespace std;

class Box
{
	public:
		Box(int l,int w,int h)
		{
			int tot = l * h * w;
			cout << endl << endl << "Volume of Box is : " << tot;
			
			cout << endl << endl;
			
			if(tot % 2 == 0)
			{
				cout << "Even Number..";
			}
			else
			{
				cout << "Odd Number..";
			}
		}
};

int main()
{
	int hight,wight,lenght;
	
	cout << "Enter Hight of box : ";
	cin >> hight;
	
	cout << "Enter Wight of box : ";
	cin >> wight;
	
	cout << "Enter Lenght of box : ";
	cin >> lenght;
	
	Box b1(hight,wight,lenght);
	
	return 0;
}

