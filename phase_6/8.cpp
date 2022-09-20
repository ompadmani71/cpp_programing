#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

class Tringle
{
	public:
		int s1,s3;
		float s2;
		
		Tringle()
		{
			this->s1 = 7;
			this->s3 = 15;
			
			this->s2 = (s3*s3) - (s1*s1);
			this->s2 = sqrt(s2);
			
			cout << endl << "Distance laader to wall is : " << this->s1 << "m"<< endl << endl;	
			cout << "Ladder size is : " << this->s3 << "m" << endl << endl;		
			cout << "Wall size is : " << this->s2 << "m" << endl << endl;
		}
		
};

int main()
{
	Tringle t1;
	
	return 0;
}

