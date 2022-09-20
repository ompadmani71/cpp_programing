#include<iostream>
#include<string.h>
using namespace std;

class Array
{
	public:
		char arr[150];
		int count=0,sum=0;
		float avg;
	
		int array()
		{
			for(int i=97;i<=122;i++)
			{
				arr[i] = (char)(i);
			}
			
			for(int i=97;i<=122;i+=3)
			{
				cout << "--> "<< arr[i] << endl;
				sum = sum + arr[i];
				count++;
			}
			
			avg = sum / count;
			return avg;
		}
};

int main()
{
	Array a1;
	
	cout << endl << endl << "Sum of ASCII value : "<< a1.array();
	
	
	return 0;
}

