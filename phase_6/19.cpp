#include<iostream>
//#include<string.h>
using namespace std;

class HOUSE
{
	public:
		void house()
		{
			cout << "All Inforamtion About House : " << endl << endl;
		}
};


class Kitchen : public HOUSE
{
	public:
		void kitchen()
		{
			cout << "1. KITCHEN : " << endl << endl;
			cout << " - laxury platform" << endl
			<< " - ovan pre-installed" << endl
			<< " - extra storage" << endl
			<< " - R.O. Service" << endl;
		}

};

class Dining_Table : public Kitchen
{
	public:
		void dining_table()
		{
			cout << endl << "ii. Dining Table : " << endl << endl
			<< " - 6 chair capicity" << endl
			<< " - flaxible chair " << endl
			<< " - free Dinind set" << endl;
		}
};


class Bedroom : public HOUSE
{
	public:
		void bedroom()
		{
			cout << endl << "2. BEDROOM : " << endl << endl;
			cout << " - laxury Bed" << endl
			<< " - furnichur seted" << endl
			<< " - extra storage" << endl
			<< " - full lighting" << endl;
		}
		
};

class Bathroom : public Bedroom
{
	public:
		void bathroom()
		{
			cout << endl << "ii. Bathroom : " << endl << endl
			<< " - extra angle point" << endl
			<< " - laxury environment" << endl
			<< " - all services include" << endl;
		}
};


class Backyard : public HOUSE
{
	public:
		void backyard()
		{
			cout << endl << "3. BACKYARD : " << endl << endl;
			cout << " - loen avilable" << endl
				<< " - full sunlight" << endl
				<< " - betch for sit" << endl
				<< " - night light" << endl;
		}
		
};

class Garage : public Backyard
{
	public:
		void garage()
		{
			cout << endl << "ii. GARAGE : " << endl << endl
				<< " - 2 car parking" << endl
				<< " - tools and assisories" << endl
				<< " - no maintance charges" << endl;
		}
		
};


int main()
{
	Dining_Table p1;
	p1.house();
	p1.kitchen();
	p1.dining_table();
	
	Bathroom p2;
	p2.bedroom();
	p2.bathroom();
	
	Garage p3;
	p3.backyard();
	p3.garage();

	return 0;
}

