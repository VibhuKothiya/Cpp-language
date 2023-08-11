//5. WAP to demonstrate example of default constructor or no argument constructor.

#include<iostream>
#include<string.h>
using namespace std;
	
class default_c{
	public:
		char name[100] = "Constructor";
		int no_of_type = 3;
		char typeof_constructor[100] = "Default, Parameterised & Copy";
		
		default_c(){
			cout<<"Name is: "<<name<<endl
				<<"No. of types of constructor is: "<<no_of_type<<endl
				<<"Types of constructors are: "<<typeof_constructor<<endl; 
			
		}
};
int main(){
	default_c Obj;						// default constructor
	
	return 0;
}
 	
 	
 	