//1. WAP to create a Message class with a constructor that takes a single string with a default value. 
//Create a private member string, and in the constructor simply assign the argument string to your internal string. 
//Create two overloaded member functions called print( ): one that takes no arguments and simply prints the message stored in the object, and one that takes a string argument, which it prints in addition to the internal message.

#include<iostream>
#include<string.h>
using namespace std;

	class Message{
		private : 
		string name;
		
		public:
		string surname;
						
		Message(string name){
			this->name = name;			
		}
		
		void print(){
					
			cout<<"Name : ";
		}
		void print(string surname){
			
			cout<<name<<" "<<surname;
		}
			
	};


int main(){
	Message M("Vibhuti");
	
	M.print();
	M.print("Kothiya");	
	
	return 0;
}	
