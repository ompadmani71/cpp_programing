#include<iostream>
#include<string.h>
using namespace std;

class Find
{
	public:
		char S[100];
		int freq[26] = { 0 };
		int i;
		
		
		void SetData()
		{
			cout << "Enter String : ";
			gets(this->S);
		}
		
		void Feqn()
		{
			Find::SetData();
			
		    while (S[i] != '\0') 
			{
		        freq[S[i] - 'a']++;
		        i++;
		    }
		}
		
		void GetStr()
		{
			
			Find::Feqn();
			
			for (i = 0; i < 26; i++) 
			{  
		        if (freq[i] != 0)
				{
		            printf("%c - %d\n",i + 'a', freq[i]);
		        }
		    }
		}
};

int main()
{
	Find f1;
	
	f1.GetStr();
	
	return 0;
}

