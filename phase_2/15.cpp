#include<iostream>
using namespace std;

class Tv
{
	private:
		int tv_hight = 32;
		int tv_wight = 52;
		int left = 10;
		int right = 10;
		int top = 10;
		int bottom = 10;
		int wall_wight;
		int wall_hight;
		
	public:
		void Setter()
		{
			cout << "LED Smart TV Height x Width = 32 x 52 Inches" << endl;
			
			wall_wight = tv_wight + left + right;
			wall_hight = tv_hight + top + bottom;
			
			cout << endl << "Wall Minimum H x W to Around atlist 10 Inches Margin." << endl;
			
			cout << endl << "WALL Height x Width is : " 
				 << wall_hight << " x " 
				 << wall_wight << " Inches" << endl;
		}
		
};

int main()
{
	Tv t1;
	
	t1.Setter();
	
	return 0;
}

