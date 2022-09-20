#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

class Tringle
{
	public:
		int s1,s2;
		float s3;
		
		Tringle()
		{
			this->s1 = 6;
			this->s2 = 13;
			
			this->s3 = (s1*s1) + (s2*s2);
			this->s3 = sqrt(s3);
			
			cout << endl << "First side is : " << this->s1 << endl << endl;
			cout << "Second side is : " << this->s2 << endl << endl;
			cout << "Third side is : " << this->s3 << endl << endl;
		}
		
};

int main()
{
	Tringle t1;
	
	return 0;
}

