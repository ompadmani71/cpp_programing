#include<iostream>
#include<string.h>
using namespace std;

// 300
// 60
// 270
// 28
// 28
class Universe
{
	public:
		void uni_movies()
		{
			cout << "Universe already lauched 300+ movies.." << endl;
		}
};

class Marvel : public Universe
{
	public:
		void mar_movies()
		{
			cout << endl << "Marvel already launched 60+ movies.." << endl;
		}
		
};

class DC : public Universe
{
	public:
		void DC_movies()
		{
			cout << endl << "DC already launched 270+ movies.." << endl;
		}
};

class MHeroes : public Marvel
{
	public:
		void mar_heroes()
		{
			cout << endl << "Marvel have launched 25+ heroes.." << endl;
		}
};

class DCHeroes : public DC
{
	public:
		void dc_heroes()
		{
			cout << endl << "dc have launched 29+ heroes.." << endl;
		}
};

class Access : public MHeroes, public DCHeroes
{
	public:
		void access()
		{
			cout << endl << "All accesss is here.." << endl;
		}
		
};
int main()
{
	Access a1;
	
	a1.Marvel::uni_movies();
	
	a1.mar_movies();
	
	a1.DC_movies();
	
	a1.mar_heroes();
	
	a1.dc_heroes();
	
	return 0;
}

