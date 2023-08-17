//multiple inheritance

#include<iostream>
#include<string.h>
using namespace std;

class employee1{
	public:
	int id;
	char name[100];
	char adress[100];
	
	void set(){
		cout<<"Enter emp id: ";
		cin>>id;
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter adress: ";
		cin>>adress;
	}	
};
class employee_1{
	public:
	int roll_no;
	char role[100];
	int salary;
	
	void set_1(){
		cout<<"Enter roll No.: ";
		cin>>roll_no;
		cout<<"Enter role of emp: ";
		cin>>role;
		cout<<"Enter Salary of emp: ";
		cin>>salary;
	}
};
class employee_info: public employee1, public employee_1{
	public:
	void print(){
		cout<<"Id: "<<id<<endl
			<<"Name: "<<name<<endl
			<<"Adress: "<<adress<<endl
			<<"Roll No.: "<<roll_no<<endl
			<<"Role: "<<role<<endl
			<<"Salary: "<<salary<<endl;
	}
};
int main(){
	employee_info E;
	E.set();
	E.set_1();
	E.print();
	
	return 0;
}







