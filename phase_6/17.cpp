#include<iostream>
#include<string.h>
using namespace std;

class Player
{
	public:
		void Team1()
		{
			cout << "TEAM 1 : " << endl << endl 
			<< "1. Rohit Sharma" << endl
			<< "2. M.S. Dhoni" << endl
			<< "3. Devid Warner" << endl
			<< "4. Krist gyell" << endl
			<< "5. Deepak chahar" << endl
			<< "6. Jastprit Bumrah" << endl
			<< "7. Kuldeep yadav" << endl << endl;
		}
		
};

class CricketPlayer : public Player
{
	public:
		void Team2()
		{
			cout << endl << "TEAM 2 : " << endl << endl 
			<< "1. Prutvi Show" << endl
			<< "2. Devid millar" << endl
			<< "3. Glenn Maxwell" << endl
			<< "4. Rahul Dravid" << endl
			<< "5. Kuldeep Yadav" << endl
			<< "6. Bhuvneshvar" << endl
			<< "7. Rashid Khan" << endl << endl;
		}
};

class Batsman : public CricketPlayer
{
	public:
		void Batsman_score()
		{
			cout << "Team 1 : " << endl << endl;
			cout << "Rohit Sharma : 78 run 50 ball (out)" << endl
			<< "M.S. Dhoni : 12 run 3 ball (out)" << endl
			<< "Devid warner : 30* run 6 ball" << endl
			<< "Krist gyell : 20* run 5 ball" << endl
			<< "Deepak Chahar : (Next)" << endl << endl;
		}
};

class Bowler : public CricketPlayer
{
	public:
		void Bowlar_score()
		{
			cout << "Team 2 : " << endl << endl;
			cout << "Kuldeep Yadav : 4 over (39 runs,1 wicket)" << endl
			<< "Bhuvneshwar : 3 over (20 run,2 wicket)" << endl
			<< "Rasid Khan : 4 over (32 run)" << endl
			<< "Deepak Chahar : 1.2* over (12 run)" << endl << endl;
		}
};

int main()
{
	Batsman b1;
	
	b1.Team1();
	b1.Batsman_score();
	
	Bowler b2;
	
	b2.Team2();
	b2.Bowlar_score();
	return 0;
}

