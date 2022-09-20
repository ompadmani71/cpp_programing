#include<iostream>
#include<string.h>
using namespace std;

void kaveri()
{
	int w,h;

	
	cout << "Enter curtains Hight : ";
	cin >> h;
	cout << "Enter curtains Wight : ";
	cin >> w;
	
	if(h == 14 && w == 8)
	{
		cout << endl << endl << "You can apply curtains.";
	}
	else
	{
		cout << endl << endl << "Your diameter are not same...!";
	}
}

class Window
{
	public:
		void a1()
		{
			kaveri();
		}
};

int main()
{
	Window w1;
	
	w1.a1();
	
	return 0;
}
