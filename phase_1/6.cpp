#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
	int temp;
	if(rand() <= 999999)
	{
		do
		{
			int R;
			R = rand() + rand();
			cout << endl << endl << "Random : " << R / 10000 << rand();
			
			cout << endl << endl << "Press 0 for Exit..." << endl << endl
			                     << "Press 1 for Countinue..." << endl << endl;
			cin >> temp;
		}
		while(temp != 0);
	}
 	
  return 0;
}
