//Simple inheritance

#include<iostream>
#include<string.h>
using namespace std;

class mother{
	public:
	void display(){
		cout<<"I am from mother class"<<endl;
	}
		
}; 
class daugther{
	public:
	void display(){
		cout<<"I am from daugther class"<<endl;
	}	
}; 

int main(){
	daugther D;
	D.display();
	
	return 0;
}
