//Hiraichicale inheritance

#include<iostream>
#include<string.h>
using namespace std;

class animal{
	public:
	char animal_name[100];
	int animal_age;
	
	void set(){
		cout<<"Enter Name: ";
		cin>>animal_name;
		cout<<"Enter age: ";
		cin>>animal_age;
	}
};
class Zebra : public animal{
	public:
		char place_origin[100] = "Africa";
		
		void show(){
			cout<<"Name is: "<<animal_name<<endl;
			cout<<"Age is: "<<animal_age<<endl;
			cout<<"place of origin of Zebra is: "<<place_origin<<endl;
		}	
		
};
class Dolphin : public animal{
	public:
		char place_origin[100] = "ocean";
		
		void print(){
			cout<<"Name is: "<<animal_name<<endl;
			cout<<"Age is: "<<animal_age<<endl;
			cout<<"place of origin of Dolphin is: "<<place_origin<<endl;
		}	
		
};
int main(){
	Zebra Z;
	cout<<"-----Information about Zebra-----"<<endl;
	Z.set();
	Z.show();
	
	cout<<"-----Information about Dolphin-----"<<endl;
	Dolphin D;
	D.set();
	D.print();
	
	return 0;
}





