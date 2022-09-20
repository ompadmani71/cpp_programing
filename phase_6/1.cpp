#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class Grocery
{
	private:
		int bread=0,wheat=0,milk=0;
		int soup=0,frozen_food=0,cheese=0;
		
		void Main_manu()
		{
			system("CLS");
			cout << endl << "1. ADD ITEMS" << endl << endl
			<< "2. UPDATE ITEMS" << endl << endl
			<< "3. DELETE ITEMS" << endl << endl
			<< "4. CHEAK OUT" << endl << endl;
		}
		
		void Items()
		{
			system("CLS");
			cout << "What You Like to buy : " << endl;
			cout << endl << endl << "1. BREAD --> $10" << endl << endl
			<< "2. WHEAT --> $2" << endl << endl 
			<< "3. MILK --> $20" << endl << endl
			<< "4. SOUP --> $15" << endl << endl
			<< "5. FROZEN FOOD --> $25" << endl << endl 
			<< "6. CHEESE --> $15" << endl << endl;
			
			Grocery::Add_item();
		}
		
		void print_msg()
		{
			cout << endl << endl << "Item deleted successfully...";
			system("pause>null");
		}
		
		void Delete_item_manu()
		{
			system("CLS");
			cout << "What You Like to Delete : " << endl;
			cout << endl << "1. BREAD" << endl << endl
			<< "2. WHEAT" << endl << endl 
			<< "3. MILK" << endl << endl
			<< "4. SOUP" << endl << endl
			<< "5. FROZEN FOOD" << endl << endl 
			<< "6. CHEESE" << endl << endl;
			
			
		}
		
		void delete_item()
		{
			Grocery::Delete_item_manu();
			
			int ch2;
			cout << endl << "Enter choice : ";
			cin >> ch2;
			
			switch(ch2)
			{
				case 1: bread = 0;
						print_msg();
					break;
					
				case 2: wheat = 0;
						print_msg();
					break;
					
				case 3: milk = 0;
						print_msg();
					break;
					
				case 4: soup = 0;
						print_msg();
					break;
					
				case 5:  frozen_food = 0;
						print_msg();
					break;
					
				case 6: cheese = 0;
						print_msg();
					break;
					
			}
		}
		
		int total;
		void cart_manu()
		{
			system("CLS");
			cout << "Your bill : " << endl;
			cout << endl << "1. BREAD : " << bread*10 << "$" << endl << endl
			<< "2. WHEAT : " << wheat*2 << "$" << endl << endl 
			<< "3. MILK : " << milk*20 << "$" << endl << endl
			<< "4. SOUP : " << soup*15 << "$" << endl << endl
			<< "5. FROZEN FOOD : " << "$" << frozen_food*25 << endl << endl 
			<< "6. CHEESE : " << "$" << cheese*15 << endl << endl;
			
			total = (bread*10) + (wheat*2) + (milk*20) + (soup*15) + (frozen_food*25) + (cheese*15);
			
			cout << endl << "Your Total is : " << total << "$"<< endl;
		}
		
		void cart()
		{
			Grocery::cart_manu();
			int money,ch3;
			
			cout << endl << "1. Add More " << endl << endl 
			<< "2. Final Cheakout " << endl << endl;
			
			cout << endl << "Enter Your choice : ";
			cin >> ch3;
			
			switch(ch3)
			{
				case 1:
						Grocery::disp();		
					break;
					
				case 2:
						cout << endl << "How many Money available in wallet : ";
						cin >> money;
						
						if(money >= total)
						{
							cout << endl << "Purchase Success..." << endl;
							exit(0);
						}
						else
						{
							cout << endl << "Purchase Not Possible. you Haven't enough money..." << endl;
							exit(0);
						}
					break;
			}
			
		}
		
		void bread_count()
		{
			int b1;
			system("CLS");
			cout << endl << "How Many Breads Want to buy : ";
			cin >> b1;
			
			bread += b1;
			
			cout << endl << endl << "Your Total Breads : " << bread;	
			cout << endl << endl << endl << "BREADS ADDED TO CART....";
			
			system("pause>null");
			Grocery::Main_manu();
		}
		
		void wheat_count()
		{
			int w1;
			system("CLS");
			cout << endl << "How Many wheat Want to buy : ";
			cin >> w1;
			
			wheat += w1;
			
			cout << endl << endl << "Your Total wheat : " << wheat;	
			cout << endl << endl << endl << "WHEAT ADDED TO CART....";
			
			system("pause>null");
			Grocery::Main_manu();
		}
		
		void milk_count()
		{
			int m1;
			system("CLS");
			cout << endl << "How Many milk Want to buy : ";
			cin >> m1;
			
			milk += m1;
			
			cout << endl << endl << "Your Total milk : " << milk;	
			cout << endl << endl << endl << "MILK ADDED TO CART....";
			
			system("pause>null");
			Grocery::Main_manu();
		}
		
		void soup_count()
		{
			int s1;
			system("CLS");
			cout << endl << "How Many soup Want to buy : ";
			cin >> s1;
			
			soup += s1;
			
			cout << endl << endl << "Your Total soup : " << soup;	
			cout << endl << endl << endl << "SOUP ADDED TO CART....";
			
			system("pause>null");
			Grocery::Main_manu();
		}
		
		void frozen_food_count()
		{
			int f1;
			system("CLS");
			cout << endl << "How Many frozen food Want to buy : ";
			cin >> f1;
			
			frozen_food += f1;
			
			cout << endl << endl << "Your Total frozen food : " << frozen_food;	
			cout << endl << endl << endl << "FROZEN FOODS ADDED TO CART....";
			
			system("pause>null");
			Grocery::Main_manu();
		}
		
		void cheese_count()
		{
			int c1;
			system("CLS");
			cout << endl << "How Many cheese Want to buy : ";
			cin >> c1;
			
			cheese += c1;
			
			cout << endl << endl << "Your Total cheese : " << cheese;	
			cout << endl << endl << endl << "CHEESE ADDED TO CART....";
			
			system("pause>null");
			Grocery::Main_manu();
		}
		
		void Add_item()
		{
			int ch1;
			cout << endl << "Enter choice : ";
			cin >> ch1;
			
			switch(ch1)
			{
				case 1: Grocery::bread_count();
					break;
					
				case 2: Grocery::wheat_count();
					break;
					
				case 3: Grocery::milk_count();
					break;
					
				case 4: Grocery::soup_count();
					break;
					
				case 5: Grocery::frozen_food_count();
					break;
					
				case 6: Grocery::cheese_count();
					break;
					
			}
		}
		
public:		
		void disp()
		{
			int ch;
			
			Grocery::Items();
			
			do
			{
				Grocery::Main_manu();
				
				cout << "Enter Your Choice (1 to 4) : ";
				cin >> ch;
				
				switch(ch)
				{
					case 1: Grocery::Items();
						break;
						
					case 2: Grocery::Items();
						break;
						
					case 3: Grocery::delete_item();
						break;
						
					case 4: Grocery::cart();
						break;
				}
			}
			while(ch!=0);
		}
};

int main()
{
	Grocery p1;
	
	p1.disp();
	
	return 0;
}

