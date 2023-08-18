//3. WAP which illustrate the use of Method Overriding concept.

#include<iostream>
#include<string.h>
using namespace std;

class animal{
	public:		
	void speak(){
		
		cout<<"Speaking "<<endl;		
	}	
};

class Dog: public animal{
	public: 
	void speak(){
		cout<<"Barking "<<endl;
	}
};

int main(){
	
	Dog D;
	D.speak();
	
	return 0;
}






