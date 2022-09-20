#include<iostream>
using namespace std;

class Result
{
	private:
		int maths;
		int phy;
		int chem;
		
	public:
		void Setter()
		{
			cout << "Physices Marks : ";
			cin >> this->phy;
			
			cout << "Chemestry Marks : ";
			cin >> this->chem;
			
			cout << "Maths Marks : ";
			cin >> this->maths;
		}
		
		void Check_grade()
		{
			if(maths > 80 && phy > 75 && chem > 72)
			{
				cout << "A Grade" << endl << endl;
			}
			else if(maths >= 60 && phy >= 55 && chem >= 50)
			{
				cout << "B Grade" << endl << endl;
			}
			else if(maths >= 40 || phy >= 35 || chem >= 35)
			{
				cout << "C Grade" << endl << endl;
			}
			else
			{
				cout << endl << endl << "Sorry Fail...";
			}
		}
};

int main()
{
	int n;
	
	cout << "How many students : ";
	cin >> n;
	
	Result r[n];
	
	for(int i=0; i<n; i++)
	{
		cout << endl<< "Enter Student " << i+1 << " Marks : " << endl << endl;
		r[i].Setter();
		cout << endl << endl;
	}
	
	for(int i=0; i<n; i++)
	{
		cout << endl<< "Student " << i+1 << " grade : " << endl << endl;
		r[i].Check_grade();
	}
	return 0;
}
