//Bank Management System

#include<iostream>
#include<string>
#include<string.h>

using namespace std;

class Bank{																
	public:		
		void mainPage(){											//Print main page
			cout<<"    -: BANK MANAGEMENT SYSTEM :-"<<endl;
			cout<<"--------------------------------"<<endl<<endl;
			cout<<"    -: Designed & Programmed By :-"<<endl;
			cout<<"--------------------------------"<<endl;
			cout<<"         VIBHUTI KOTHIYA      "<<endl<<endl<<endl;
			cout<<"        -: Trainer :-         "<<endl;
			cout<<"--------------------------------"<<endl;
			cout<<"         MEET DHOKARIYA       "<<endl<<endl;
		}
	};		
					
class admin{														//Admin work details
		private:
			int number;
			string New_name, name;
			string phone_no, phone;
			string acc_no, account;
			string ssc_no;
			string password;
			string P = "@25994";
					
		public:		
				void setData(){
					cout<<"Enter Name: ";
					getline (cin >> ws, New_name);
					cout<<"Enter Phone No.: ";
					getline (cin >> ws, phone_no);
					cout<<"Enter Account No.: ";
					getline (cin >> ws, acc_no);
					cout<<"Enter social secutiy code: ";
					getline (cin >> ws, ssc_no);
				}
				void getData(){
					cout<<"Name: "<<New_name<<endl;
						    			
					cout<<"Phone No.: "<<phone_no<<endl;
						    			
					cout<<"Account No.: "<<acc_no<<endl;
						    			
					cout<<"Social secutiy code: "<<ssc_no<<endl;
				}		
				
					 	administrator(){						
								
							cout<<"----------------------------------------------------------------"<<endl;
							cout<<"                    -: Welcome as Administrator :-                      "<<endl;
							cout<<"----------------------------------------------------------------"<<endl<<endl<<endl;							
							cout<<"Admin Enter Your Password:-        ";
							getline (cin >> ws, password);
							while(1){
														
						    	if(P == password){	
									cout<<"1. Add New Record To the Database"<<endl;					//first add details of customer		    		
						        	cout<<"2. Search customer by Name"<<endl;							//search data by name
						        	cout<<"3. Search customer by phone No."<<endl;						//search data by phone no.
						        	cout<<"4. Search customer by account No."<<endl<<endl;				//search data by account no.
						        	cout<<"Enter your choise: ";
						        	cin>>number;
						    	}
						    	else{
						        	cout<<"Invalid Password! Please try again.."<<endl;
						    	}
						    	
						    	switch(number){
						    		case 1:						    				
										setData();
										cout<<endl;					    		
						    			getData();
										cout<<endl;							    		
						    			break;					    			
									
									case 2:
						    			cout<<"Search customer details by Name: ";
						    			getline (cin >> ws, name);
						    				if(name == New_name){
						    					cout<<endl;	
												getData();
						    					cout<<endl<<endl;
											}
											else{
												cout<<"Data not found!"<<endl<<endl;												
											}
											break;
									case 3:
						    			cout<<"Search customer details by phone No.: ";
						    			cin>>phone_no;
						    				if(phone == phone_no){
						    					getData();
						    					cout<<endl<<endl;
											}
											else{
												cout<<"Data not found"<<endl;												
											}
											break;
									case 4:
						    			cout<<"Search customer details by account No.: ";
						    			cin>>acc_no;
						    				if(account == acc_no){
						    					getData();
						    					cout<<endl<<endl;
											}
											else{
												cout<<"Data not found"<<endl;												
											}
											break;
									default:
											cout<<"Invalid input!"<<endl;		
								}
							}
						}
	};
class staff_detail{																				//Enter staff details
		private: 
		string staff_name;
		string staff_accNo;
		string staff_phone;
		string staff_email;
		int balance;
		int number;
		int money;
		int amount = 500000;				
					public:
						void staff(){						
							cout<<"----------------------------------------------------------------"<<endl;
							cout<<"                    -: Welcome as STAFF :-                      "<<endl;
							cout<<"----------------------------------------------------------------"<<endl<<endl<<endl;																	
										
								cout<<"Enter the Name of Staff          : ";
								getline (cin >> ws, staff_name);
								cout<<"Enter the Account No. of Staff   : ";
								getline (cin >> ws, staff_accNo);
								cout<<"Enter the Phone No. of Staff     : ";
								getline (cin >> ws, staff_phone);
								cout<<"Enter the Email of Staff         : ";
								getline (cin >> ws, staff_email);	
							}		    
						
						void show(){
						
							cout<<"----------------------------------------------------------------"<<endl;					
							cout<<"Staff Name    : "<<staff_name<<endl;							
							cout<<"Account No.   : "<<staff_accNo<<endl;							
							cout<<"Phone No.     : "<<staff_phone<<endl;							
							cout<<"E-mail        : "<<staff_email<<endl;
							cout<<"----------------------------------------------------------------"<<endl<<endl;
							}
							
						void choise(){															
							int number;							
							cout<<"                   press [1] to Deposite the Money:             "<<endl<<endl;	
							cout<<"                   press [2] to Transfer the Money:             "<<endl<<endl;
							cout<<"                   press [3] to Withdraw the Money:             "<<endl<<endl;
							cin>>number;
						
						switch(number){
							case 1:
								cout<<"----------------------------------------------------------------"<<endl;
								cout<<"Deposite the Money Rs. : ";
								cin>>money;
								cout<<"----------------------------------------------------------------"<<endl<<endl;
								
								cout<<"Your Actual Amount is Rs.		: "<<amount<<endl<<endl;
								cout<<"Congrates Your Amount Has Been Deposite Successfully"<<endl<<endl;
								cout<<"Your Account Balance is Rs.		: "<<amount+money<<endl<<endl;
								break;
								
							case 2:
								cout<<"----------------------------------------------------------------"<<endl;
								cout<<"Transfer Amount Rs. : ";
								cin>>money;
								cout<<"----------------------------------------------------------------"<<endl<<endl;
								
								cout<<"Your Actual Amount is Rs. 		: "<<amount<<endl<<endl;								
									if(amount > money){
										balance = amount - money;
										cout<<"Congrates Your Amount Has Been Transfered Successfully"<<endl<<endl;
										cout<<"Your Account Balance is Rs.		: "<<balance<<endl<<endl;
									}
									else{
									cout<<"Insufficient Balance"<<endl;
									}
								break;
								
							case 3:
								cout<<"----------------------------------------------------------------"<<endl;
								cout<<"Withdraw the Money: ";
								cin>>money;
								cout<<"----------------------------------------------------------------"<<endl<<endl;
								
								cout<<"Your Actual Amount is Rs.		: "<<amount<<endl<<endl;
								if(amount > money){
									balance = amount-money;
									cout<<"Congrates Your Amount Has Been Withdraw Successfully"<<endl<<endl;
									cout<<"Your Account Balance is Rs.	: "<<balance<<endl<<endl;
								}
								else{
									cout<<"Insufficient Balance"<<endl;
								}
								break;
								default:
								    cout<<"Invalid Input!"<<endl;
							}
						}
				};	
				
int main(){
	Bank B;
	admin ad;
	staff_detail s;
	
	B.mainPage();	
	char temp;
	char login;					
			
			cout<<"   Press enter to continue....  "<<endl<<endl;			
				temp = getchar();
					if(temp == '\n'){
						cout<<"----------------------------------------------------------------"<<endl;
						cout<<"-: Press A to login as Administrator or S to login as Staff :-"<<endl;						
						cout<<"----------------------------------------------------------------"<<endl;						
						cin>>login;	
					}
					else{
						cout<<"Invalid input!"<<endl;
					}
	
				switch(login){
						case 'A':
							ad.administrator();
							break;
						case 'S':
							s.staff();
							s.show();
							s.choise();
							break;	
						default:
							cout<<"Enter matching input!"<<endl;	
						}	
	return 0;
}

