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
			this->s1 = 13;
			this->s3 = 26;
			
			this->s2 = (s3*s3) - (s1*s1);
			this->s2 = sqrt(s2);
			
			cout << endl << "First side is : " << this->s1 << endl << endl;	
			cout << "Third side is : " << this->s3 << endl << endl;		
			cout << "Second side is : " << this->s2 << endl << endl;
		}
		
};

int main()
{
	Tringle t1;
	
	return 0;
}

