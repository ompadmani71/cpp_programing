#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

/*when all the data menbers and member 
  functions are combined in a single unit called class, 
  and this process is called Encapsulation*/

class Hotel
{
	private: // private and public keyword called access specifier
		int id;
		char name[100];
		char type[100];
		int staff_size;
		int room_size;
		int establish_year;
		char country[100];
		int rate;
		char web[100];
		
	public:	/* when data member or member functions are made public , 
  		    	it can be accessed by everyone */
  		    	
  		    	
		//setter : use for set data
		void SetData()
		{
			cout << "Id : "; cin >> this->id;
			cout << "name : "; fflush(stdin); gets(this->name);
			cout << "type : "; fflush(stdin); gets(this->type);
			cout << "staff_size : "; cin >> this->staff_size;
			cout << "room_size : "; cin >> this->room_size;
			cout << "establish_year : "; cin >> this->establish_year;
			cout << "country : "; fflush(stdin); gets(this->country);
			cout << "rate : "; cin >> this->rate;
			cout << "web : "; fflush(stdin); gets(this->web);
			
		}
		
		// getter : use for get data
		void GetData()
		{
			cout << endl << endl << "Id : " << this->id << endl
			<< "name : " << this->name << endl
			<< "type : " << this->type << endl
			<< "staff_size : " << this->staff_size << endl
			<< "room_size : " << this->room_size << endl
			<< "establish_year : " << this->establish_year << endl
			<< "Country : " << this->country << endl
			<< "rate : " << this->rate << endl
			<< "web : " << this->web << endl;
		}
			
};

/* that is main function for call function and use data....*/
int main()
{
	int n,i;
	Hotel u1;
	
	u1.SetData();
	
	u1.GetData();
	return 0;
	
}

