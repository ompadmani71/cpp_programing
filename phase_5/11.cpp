#include<iostream>
#include<string.h>
using namespace std;

void US()
{
	cout << endl << "US Own a First rank in base of millitary strengh." << endl << endl;
}

void China()
{
	US();
	cout << "China Own a Second rank in base of millitary strengh." << endl << endl;
}

void India()
{
	China();
	cout << "India Own a Third rank in base of millitary strengh." << endl << endl;
}

class Data
{
	public:
		Data()
		{
			India();
		}
};

int main()
{
	Data d1;
	
	return 0;
}
