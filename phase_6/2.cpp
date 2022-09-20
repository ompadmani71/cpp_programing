#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Bank
{
	public:
		int amount = 18000;
		
		void choice()
		{
			int ch;
			
			cout << endl << endl << "Enter Your choice : ";
			cin >> ch;
			
			switch(ch)
			{
				case 1: Bank::deposite();
					break;
					
				case 2: Bank::withdraw();
					break;
					
				default : cout << endl << endl << "Invalid choice...";
			}
		}
		
		void deposite()
		{
			int dip;
			system("CLS");
			cout << endl << "Your Current balance is : " << this->amount;
			
			cout << endl << endl << "Enter Amount for diposite: ";
			cin >> dip;
			
			this->amount = this->amount + dip;
			
			cout << endl << endl << "AMOUNT UPDATED...";
			system("pause>null");
			Bank::main_manu();
		}
		
		void withdraw()
		{
			int wid;
			system("CLS");
			cout << endl << "Your Current balance is : " << this->amount;
			
			cout << endl << endl << "Enter Amount for withdraw : ";
			cin >> wid;
			
			if(amount > wid)
			{
				this->amount = this->amount - wid;
				cout << endl << endl << "AMOUNT WITHDRAWED...";
				system("pause>null");
				Bank::main_manu();
			}
			else
			{
				cout << endl << endl << "NOT ENOUGH AMOUNT....";
				system("pause>null");
				Bank::main_manu();
			}
			
		}
		
		void main_manu()
		{
			system("CLS");
			cout << endl << "Your Current balance is : " << this->amount;
			
			cout << endl << endl << "1. Deposite " << endl
			<< "2. Withdraw";
			
			Bank::choice();
		}
};

int main()
{
	Bank bisuness_man;
	
	bisuness_man.main_manu();
	return 0;
}

