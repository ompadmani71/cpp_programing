#include<iostream>
#include<string.h>
using namespace std;
/*
	Lenght *  hight... 10 * 4   = 40 feet 
*/
void box()
{
	long int hight,wight;
	
	cout << "A4 size in pixal : " << endl;
	cout << endl << "Hight : 3508" << endl
	<< "Wight : 2480 " << endl << endl;	
	
	hight = 3508;
	wight = 2480;
	
	cout << "One box size is : 350 X 90 px" << endl;
	cout << endl << "Maintain distance of 8 px between all box" << endl;
	cout << endl << "For maintain distance we increase box size +8" << endl;
	cout << endl << "Now our box size is 358 X 98" << endl << endl;
	
//	float h1 = hight / 358.00;
//	float w1 = wight / 98.00;

	int h1 = hight / 358;
	int w1 = wight / 98;

	
	cout << endl << "Hight x wight : " << h1 * w1;
	
}

class A4
{
	public:
		void call()
		{
			box();
		}
};

int main()
{
	A4 s1;
	
	s1.call();
	
	return 0;
}

