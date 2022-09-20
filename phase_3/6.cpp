#include<iostream>
#include<string.h>
using namespace std;

class Dare_n_win
{
	public:
		char dare1[100],dare2[100],temp[100];
		
		void player1()
		{
			cout << "PLAYER 1 : " << endl << endl;
		
			cout << "Write Dare For Player 2 : ";
			fflush(stdin);
			gets(this->dare1);
		}
		
		void player2()
		{
			Dare_n_win::player1();
			system("CLS");
			cout << endl << endl << "PLAYER 2 : " << endl << endl;
			
			cout << "Write Dare For Player 1 : ";
			fflush(stdin);
			gets(this->dare2);
		}
		
		void marge()
		{
			Dare_n_win::player2();
			
			strcpy(this->temp,this->dare1);
			strcpy(this->dare1,this->dare2);
			strcpy(this->dare2,this->temp);
			
			system("CLS");
			
			cout << endl << endl << "Player 1 dare : " << this->dare1;
			cout << endl << endl << "Player 2 dare : " << this->dare2;
		}
		
};

int main()
{
	Dare_n_win d1;
	
	d1.marge();
	
	return 0;
}

