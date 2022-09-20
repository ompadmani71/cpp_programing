#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Name
{
	public:
//	SURABHI HOTEL & RESTAURENT	
	void Display()
	{
		cout << endl << endl << endl << endl 
			 << "\t \t \t \t---------------------------------------------" << endl
			 << "\t \t \t \t|                                           |" << endl
			 << "\t \t \t \t|         SURABHI HOTEL & RESTAURENT        |" << endl
			 << "\t \t \t \t|                                           |" << endl
			 << "\t \t \t \t---------------------------------------------" << endl;
			 
	}
};

class Check_in : public Name
{
	public:
		
		int Check_in_id;
		char Name[100];
		char Check_in_date[20];
		char Check_in_time[20];
		char Check_out_date[25];
		char Check_out_time[25];
		int Room_type;
		char Room[25];
		int  Proof_type;
		long long int Proof_detail[20];
		int People_UP;
		int People_DOWN;
		long long int Contect;
		int Restorent_service_Input;
		char Restorent_service[5];
		int Payment_method_Choice;
		char Payment_method[10];
		int Repeat_restprent;
		int Repeat_proof;
		int Repeat_Payment; 
		int Repeat_room;
		int i;  
		int Room_no_check[100];
		int Room_no;
		
         
		void Room_no_check_value()
		{
			this->Room_no = 0;
			for(int i=0; i<100; i++)
			{
				this->Room_no_check[i] = 0;
			}
		}
		
		
		void SetData_Check_in(int n)
		{
			Display();
			
			this->Room_no++;
			this->Check_in_id = n;
			cout << endl << endl;
			cout << endl << "\t \t \t Enter Name : "; 		fflush(stdin); fflush(stdin);	gets(this->Name);
				 
			cout << endl << "\t \t \t Enter Date (DD / MM / YY) : ";  fflush(stdin); fflush(stdin);	 gets(this->Check_in_date);
			
			cout << endl << "\t \t \t Enter Time (HH : MM): ";      fflush(stdin); fflush(stdin);     gets(this->Check_in_time);
			
			strcpy(this->Check_out_date , "00 / 00 / 00");
			strcpy(this->Check_out_time , "00 / 00");
			
			
//				start:
				cout << endl << endl << "\t \t \t -------------------- ROOM TYPE -------------------- " << endl;
				
				cout << endl << endl << "\t \t \t \t Light Room : " << endl
				                     << "\t \t \t \t   Bedroom - 1" << endl;
							 
				cout << endl << endl << "\t \t \t \t Prime Room : " << endl
				                     << "\t \t \t \t   Bedroom - 1" << endl
							     	 << "\t \t \t \t   Ac - 1" << endl
							 		 << "\t \t \t \t   Tv -1" << endl;
							 
				cout << endl << endl << "\t \t \t \t Premium Room : " << endl
									 << "\t \t \t \t   Bedroom - 2" << endl
									 << "\t \t \t \t   Ac - 2" << endl
									 << "\t \t \t \t   Tv- 1" << endl;
							 
		        cout << endl << endl << "\t \t \t \t Vip Room : " << endl
		                    		 << "\t \t \t \t   Hall - 1" << endl
		                    		 << "\t \t \t \t   Bedroom - 2" << endl
		                    		 << "\t \t \t \t   Kitchen - 1" << endl
				                     << "\t \t \t \t   Ac - 4" << endl
				                     << "\t \t \t \t   Tv - 2"; 
							   
				do
				{
					cout << endl <<	endl << "\t \t \t Press 1 For Light Room" << endl
								 <<	endl << "\t \t \t Press 2 For Prime Room" << endl
							     <<	endl << "\t \t \t Press 3 For Premium Room" << endl
					    		 << endl << "\t \t \t Prees 4 For Vip Room" << endl;
					     
					cout << endl << "\t \t Select Room : ";     
					fflush(stdin); fflush(stdin);
				    cin >> this->Room_type;
					
					switch(this->Room_type)
					{
						case 1:
							
							this->Repeat_room = 1;
						   	strcpy(this->Room , "Light Room");
						   	
						   	for(int i=0; i<20; i++)
						   	{
						   		if(this->Room_no_check[i] == 0)
						   		{
//						   			for(int i=0; i<100; i++)
//						   			{
						   				
//									}
									this->Room_no_check[i] = 1;
									this->Room_no = i+1;
						   			break;
								}
								else
								{
									cout << endl << endl << "\t \t Sorry This Room type is Full Please Choice Onother Room Type : ";
									this->Repeat_room = 2;
								}
							}
							
						    break;
						    
						case 2:
						   
						    this->Repeat_room = 1;
				    		strcpy(this->Room , "Prime Room");
				    		
				    		for(int i=20; i<40; i++)
						   	{
						   		if(this->Room_no_check[i] == 0)
						   		{
						   			this->Room_no_check[i] = 1;
									this->Room_no = i+1;
						   			break;
								}
								else
								{
									cout << endl << endl << "\t \t Sorry This Room type is Full Please Choice Onother Room Type : ";
									this->Repeat_room = 2;
								}
							}
							
				    		break;
				    		
				    	case 3:
						
							this->Repeat_room = 1;
							strcpy(this->Room , "Premium Room");
							
							for(int i=40; i<70; i++)
						   	{
						   		if(this->Room_no_check[i] == 0)
						   		{
						   			this->Room_no_check[i] = 1;
									this->Room_no = i+1;
						   			break;
								}
								else
								{
									cout << endl << endl << "\t \t Sorry This Room type is Full Please Choice Onother Room Type : ";
									this->Repeat_room = 2;
								}
							}
							
							break;
							
						case 4:
						
							this->Repeat_room = 1;
							strcpy(this->Room , "Vip Room");
							
							for(int i=70; i<100; i++)
						   	{
						   		if(this->Room_no_check[i] == 0)
						   		{
						   			this->Room_no_check[i] = 1;
									this->Room_no = i+1;
						   			break;
								}
								else
								{
									cout << endl << endl << "\t \t Sorry This Room type is Full Please Choice Onother Room Type : ";
									this->Repeat_room = 2;
								}
							}
							
							break;
							
						default:
						
							cout << "\t \t \t Sorry, You Enter Invaild Choice..." << endl;
							this->Repeat_room = 2;
							break;
					}
				}	
				while(this->Repeat_room == 2);
					
	     				
				
			
			cout << endl << " \t \t \t \t How Many People (Only 12+ age old) : ";          
			fflush(stdin); 
			fflush(stdin);		
			cin >> this->People_UP;
			
			cout << endl << "\t \t \t \t How Many Childreen (Only 12- Age old) : ";        
			fflush(stdin); 
			fflush(stdin);     
			cin >> this->People_DOWN;
			
			do
			{
				cout << endl << "\t \t \t \t Press 1 For Adhar Card..." << endl
		             << endl << "\t \t \t \t Press 2 For Pasport..." << endl;
				
				cout << endl
				     << "\t \t Select Your Proof : ";
					     
				fflush(stdin);  fflush(stdin);   
				cin >> this->Proof_type;
				
				switch(this->Proof_type)
				{
					
					case 1:
						
						this->Repeat_proof = 1;
						cout << endl << "\t \t \t \t Enter Adhar Card Number : ";
						for(i=0; i<this->People_UP; i++)
						{
							cout << endl << "\t \t \t \t " << i+1 << " Person : ";  
							fflush(stdin); 
							fflush(stdin);   
							cin >> this->Proof_detail[i];
						}
							
						break;
							
					case 2:
					
					   	this->Repeat_proof = 1;
						cout << endl << "\t \t \t \t Enter Pasport Number : ";
					   	for(i=1; i<this->People_DOWN; i++)
					   	{
						   	 
							cout << endl << endl << "\t \t \t \t " << i+1 << " Person : ";    
							fflush(stdin); 
							fflush(stdin); 
							cin >> this->Proof_detail[i];
						}
						break;
					
					default: 
						
						this->Repeat_proof = 2;
						cout << endl << "\t \t \t \t Sorry, You Enter Invaild Choice..." << endl;
						break;
			    }	  
			}
			while(this->Repeat_proof == 2);
				
				
			cout << endl << "\t \t \t \t Enter Contect No. : ";  						  fflush(stdin); fflush(stdin);		cin >> this->Contect;
			
			do
			{
				
				cout << endl << endl << endl << "\t \t \t \t You need a Restorent Service then Preess 1 " << endl
				     				 << endl << "\t \t \t \t You need not a Restorent Service then Preess 2 " << endl;
				     				 
				cout << endl << "\t \t Enter Your Choice : ";     
				fflush(stdin); fflush(stdin);
				cin >> this->Restorent_service_Input;
				
				switch(this->Restorent_service_Input)
				{
					case 1:
						
						this->Repeat_restprent = 1;
						strcpy(this->Restorent_service , "YES");
                        break;
						
					case 2:
					
						this->Repeat_restprent = 1;
						strcpy(this->Restorent_service , "NO");	
						break;
						
					default:
					
						this->Repeat_restprent = 2;	
						cout << endl << "\t \t \t \t Sorry, You Enter Invaild Choice..." << endl;
						break;				
				}
		    }
		    while(this->Repeat_restprent == 2);
			do
			{
				cout << endl << "\t \t \t \t Press 1 For Online " << endl
			         << endl << "\t \t \t \t Press 2 For Cash " << endl;
			         
			    cout << endl << "\t \t Select Payment Method (Only Resepsionis) : ";
				fflush(stdin);  fflush(stdin);   
			    cin >> this->Payment_method_Choice;
			     
				switch(this->Payment_method_Choice)
				{
				 	case 1:
				 		
				 		this->Repeat_Payment = 1;
						strcpy(this->Payment_method , "Online");
	                     
						 break;
						 
					case 2:
					
						this->Repeat_Payment = 1;
						strcpy(this->Payment_method , "Cash");
						
						break;
						
					default:
					
						this->Repeat_Payment = 2;
						cout << endl << "\t \t \t \t Sorry, You Enter Invaild Choice..." << endl;	
						
						break;
		       }
			}
			while(this->Repeat_Payment == 2);	
	     	
		}
		

		
		void SetData_check_out(int Check_out_id)
		{		
			cout << endl << endl << "\t \t \t Enter Check - Out Date (DD / MM / YY): ";  
			fflush(stdin); fflush(stdin);   
			cin >> this->Check_out_date;		
	            
			cout << endl << endl << "\t \t \t Enter Check - Out Time (HH : MM) : ";      
			fflush(stdin); fflush(stdin);   
			cin >> this->Check_out_time;
		}
		
		void Get_Normal_Data()
		{
			cout << endl << endl << endl << " \t \t \t Name  :  " << this->Name
			             << endl << endl << "\t \t \t Id  :  " << this->Check_in_id;
		
		}

        void Get_All_Data()
        {
        	
			 		cout << endl << endl << " \t \t \t Check In Date  :  " << this->Check_in_date
						 << endl << endl << "\t \t \t Check In Time  :  " << this->Check_in_time
						 << endl << endl << "\t \t \t Check Out Date : " << this->Check_out_date
						 << endl << endl << "\t \t \t Check Out Time  :  " << this->Check_out_time
						 << endl << endl << "\t \t \t Room Type  :  " << this->Room 
						 << endl << endl << "\t \t \t People  :  " << this->People_UP
						 << endl << endl << "\t \t \t Childreen  :  " << this->People_DOWN
						 << endl << endl << "\t \t \t Proof  :  " << this->Proof_type
						 << endl << endl << "\t \t \t Proof Detail  :  " << endl; 
			for(int i=0; i<this->People_UP; i++)
			{
				cout << endl << "\t \t \t \t \t Person " << i+1 << " : "
					 <<	this->Proof_detail[i];	
			}		
			
			cout << endl << endl << "\t \t \t Contact No.  :  " << this->Contect
			     << endl << endl << "\t \t \t Restorent Service  :  " << this->Restorent_service
				 << endl << endl << "\t \t \t Paymrnt Method  :  " << this->Payment_method;  	 
						    	
		}
		
};


int main()
{
	int Id_number=1, Main_choice,Check_out_id,Room[100];
	int Room_no_check[100];
	int Room_no[100];
	int Room_count=0;
	int Id_search;
	int Room_no_search;
	int Room_no_search_check=0;
	
	Name n1;
	Check_in s1[100];
//	Check_out s2[100];

    for(int i=0; i<100; i++)
	{
		Room_no_check[i] = 0;
	}
	
	start:
	system("CLS");	
	n1.Display();
	
	cout << endl << endl << "\t\t Press 1 For Check - in" << endl
	             << endl << "\t\t Press 2 For Check - out" << endl
		         << endl << "\t\t Press 3 For Search Empty Room" << endl
		         << endl << "\t\t Press 4 For Search Customer by Id" << endl
		         << endl << "\t\t Press 5 For Search Customer by Room Number" << endl
		         << endl << "\t\t Press 6 For Exite" << endl
		         << endl << endl << "Enter Your Choice :   ";
		         
	cin >> Main_choice;
	
	switch(Main_choice)
	{
		case 1:
			
			system("CLS");
			
			s1[Id_number].Room_no_check_value();
			
			s1[Id_number].SetData_Check_in(Id_number);
			
			if( strcmp(s1[Id_number].Room , "Light Room") == 0 )
			{
				for(int i=0; i<=20; i++)
				{
					if(Room_no_check[i] == 0)
					{
						Room_no[i+1] = i+1;
						Room_no_check[i] = 1;
						cout << endl << endl << "\t \t -------------------------------"
						     << endl << endl << "\t \t | New Check - in Successfully |"
						     << endl << endl << "\t \t -------------------------------" << endl;
						
							cout << endl << endl << "\t \t Your id is " << Id_number << endl;
							cout << endl << endl << "\t \t Your Room Number is " << Room_no[i+1] << endl;
						break;
					}
					else
					{
						cout << endl << endl << "\t \t Sorry This Room type is Full Please Choice Onother Room Type : ";
						break;
					}
				}
			}
			else if( strcmp(s1[Id_number].Room , "Prime Room") == 0 )
			{
				for(int i=20; i<=40; i++)
				{
					if(Room_no_check[i] == 0)
					{
						Room_no[i+1] = i+1;
						Room_no_check[i] = 1;
						
						cout << endl << endl << "\t \t -------------------------------"
						     << endl << endl << "\t \t | New Check - in Successfully |"
						     << endl << endl << "\t \t -------------------------------" << endl;
			
						cout << endl << endl << "\t \t Your id is " << Id_number << endl;
						cout << endl << endl << "\t \t Your Room Number is " << Room_no[i+1] << endl;
							break;
					}
					else
					{
						cout << endl << endl << "\t \t Sorry This Room type is Full Please Choice Onother Room Type : ";
						break;
					}
				}
			}
			else if( strcmp(s1[Id_number].Room , "Premium Room") == 0 )
			{
				for(int i=40; i<=70; i++)
				{
					if(Room_no_check[i] == 0)
					{
						Room_no[i+1] = i+1;
						Room_no_check[i] = 1;
						
						cout << endl << endl << "\t \t -------------------------------"
						     << endl << endl << "\t \t | New Check - in Successfully |"
						     << endl << endl << "\t \t -------------------------------" << endl;
			
						cout << endl << endl << "\t \t Your id is " << Id_number << endl;
						cout << endl << endl << "\t \t Your Room Number is " << Room_no[i+1] << endl;
			
						break;
					}
					else
					{
						cout << endl << endl << "\t \t Sorry This Room type is Full Please Choice Onother Room Type : ";
						break;
					}
				}
			}
			else if( strcmp(s1[Id_number].Room , "Vip Room") == 0 )
			{
				for(int i=70; i<=100; i++)
				{
					if(Room_no_check[i] == 0)
					{
						Room_no[i+1] = i+1;
						Room_no_check[i] = 1;
						
						cout << endl << endl << "\t \t -------------------------------"
			 				 << endl << endl << "\t \t | New Check - in Successfully |"
			     			<< endl << endl << "\t \t -------------------------------" << endl;
			
						cout << endl << endl << "\t \t Your id is " << Id_number << endl;
						cout << endl << endl << "\t \t Your Room Number is " << Room_no[i+1] << endl;
						
						break;
						
					}
					else
					{
						cout << endl << endl << "\t \t Sorry This Room type is Full Please Choice Onother Room Type : ";
//						break;
					}
				}
			}

//			cout << endl << endl << "\t \t -------------------------------"
//			     << endl << endl << "\t \t | New Check - in Successfully |"
//			     << endl << endl << "\t \t -------------------------------" << endl;
//			
//			cout << endl << endl << "\t \t Your id is " << Id_number << endl;
//			cout << endl << endl << "\t \t Your Room Number is " << Room_no[i] << endl;
		
			 
			Id_number++;
			
			cout << endl << endl << "\t \t Press Any  key to Main Menu : ";
			system("pause > null");
			goto start;
			
			break;
			
		case 2:
		
			system("CLS");
			n1.Display();
			
			cout << endl << endl << endl << "\t \t \t Enter Id For Check - Out : ";
			fflush(stdin); fflush(stdin);
			cin >> Check_out_id;
		
            s1[Check_out_id].SetData_check_out(Check_out_id);
            
            Room_no_check[Check_out_id] = 0;

			
				 
            cout << endl << endl << "\t \t Press Any  key to Main Menu : ";
			system("pause > null");
			goto start;
            
            break;

		case 3:
			
			system("CLS");
			n1.Display();
			
			cout << endl << endl;
			
			for(int i=0; i<100; i++)
			{
				if(Room_no_check[i] == 0)
				{
					cout << "  " <<  i + 1 << "\t \t" ; 
				}
				
			}
			
			
			cout << endl << endl << "\t \t Press Any  key to Main Menu : ";
			system("pause > null");
			goto start;
			
	    case 4:
	    	
	    	system("CLS");
	    	n1.Display();
	    	
	    	cout << endl << endl << endl<< "\t \t \t Enter Id : ";
    		fflush(stdin);
    		fflush(stdin);
    		cin >> Id_search;
	    	
			for(int i=0; i<100; i++)
	    	{
	    		
	    		
	    		if(s1[i].Check_in_id == Id_search)
	    		{
	    			s1[i].Get_Normal_Data();
	    			
	    			cout << endl << endl << "\t \t \t Room No.  :  " << Room_no[i];
	    			
	    			s1[i].Get_All_Data();
	    			break;
				}
	    		
			}
			
			cout << endl << endl << "\t \t Press Any  key to Main Menu : ";
			system("pause > null");
			goto start;
			
			break;
			
		case 5:
		
			system("CLS");
			n1.Display();
			
				
			cout << endl << endl << endl<< "\t \t \t Enter Room No : ";
    		fflush(stdin);
    		fflush(stdin);
    		cin >> Room_no_search;
			
			for(int i=0; i<100; i++)
	    	{
	    		
	    		
	    		if(Room_no[i+1] == Room_no_search)
	    		{
	    			s1[i+1].Get_Normal_Data();
	    			
	    			cout << endl << endl << "\t \t \t Room No.  :  " << Room_no[i+1];
	    			
	    			s1[i+1].Get_All_Data();
	    			
	    			Room_no_search_check = 1;
	    			break;
				}
		
			}
			if(Room_no_search_check == 0)
				{
					cout << endl << endl << " \t \t \t This Room Number is not Found...";
				}
			
			cout << endl << endl << "\t \t Press Any  key to Main Menu : ";
			system("pause > null");
			goto start;
			
			break;
			
		case 6:
		
			system("CLS");
			n1.Display();
			
//		for(int i=0; i<100; i++)
//		{
//			cout << Room_no[i] << " ";
//		}	
			cout << endl << endl << "\t \t \t Are you Conform for Exit : " << endl;
			cout << endl << endl << "\t \t Press Any  key Exit : ";
			system("pause > null");
			
			break;
			
		default:
		
			system("CLS");
			n1.Display();
			
			cout << endl << endl << "\t \t \t \t Sorry You Are Enter Invaild Choice " ;
			
			cout << endl << endl << "\t \t Press Any  key to Main Menu : ";
			system("pause > null");
			goto start;
	}	   
	
	
	return 0;
}

