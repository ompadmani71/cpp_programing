#include<iostream>
#include<string.h>
using namespace std;

class Exam
{
	private:
		int m1[5] = {23,19,22,28,23};
		int m2[5] = {65,58,49,52,64};
		int m3[5],i;
		
	public:
		
		void exam1()
		{
			cout << "Exam 1 marks(30) : ";
			
			for(i=0;i<5;i++)
			{
				cout << m1[i] << " ";
			}
		}
		
		void exam2()
		{
			cout << endl << endl << "Exam 2 marks(70) : ";
			
			for(i=0;i<5;i++)
			{
				cout << m2[i] << " ";
			}
		}
		
		void final()
		{
			cout << endl << endl << "Final Exam (100): ";
			for(i=0;i<5;i++)
			{
				m3[i] = m1[i] + m2[i];
			}
			
			for(i=0;i<5;i++)
			{
				cout << m3[i] << " ";
			}
		}
};

int main()
{
	Exam s1;
	
	s1.exam1();
	s1.exam2();
	
	s1.final();	

	return 0;
}

