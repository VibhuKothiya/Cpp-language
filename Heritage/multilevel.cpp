//4. WAP to read and print employee information with use of multilevel inheritance. (as like in below image)
#include<iostream>
#include<string.h>
using namespace std;

class A{
	public:
	
	int id;
	char name[100];
	char role[100];
	int salary;
	int experience;
	char comp_name[100];
	char address[100];
	char email[100];
	char contact[100];
		
	void setData(){
			cout<<"Enter employee id: ";
			cin>>id;
			cout<<"Enter employee name: ";
			cin>>name;
			cout<<"Enter employee role: ";
			cin>>role;		
			
		}
};

class B: public A{
	public:
		
	void setData_1(){
			cout<<"Enter employee salary: ";
			cin>>salary;
			cout<<"Enter employee experience: ";
			cin>>experience;
		}
};

class C: public B{
	public:
		void setData_2(){
			cout<<"Enter employee compny name: ";
			cin>>comp_name;
			cout<<"Enter employee address: ";
			cin>>address;
		}
		
		void getData(){
			cout<<"Employee name: "<<name<<endl;
			cout<<"Employee role: "<<role<<endl;
			cout<<"Employee salary: "<<salary<<endl;			
		}		
};

class D: public C{
	public: 
	
	void setData_3(){
			cout<<"Enter employee email: ";
			cin>>email;
			cout<<"Enter employee contact: ";
			cin>>contact;
		}
		
	void getData_1(){
			cout<<"Employee id: "<<id<<endl;				
			cout<<"Employee experience: "<<experience<<endl;
			cout<<"Employee company name: "<<comp_name<<endl;
			cout<<"Employee address: "<<address<<endl;
			cout<<"Employee email: "<<email<<endl;
			cout<<"Employee contact: "<<contact<<endl;		
		}	
};
int main(){
	D obj;
	obj.setData();
	obj.setData_1();
	obj.setData_2();
	obj.setData_3();
		
	cout<<"-----Information about employee-----"<<endl;
	obj.getData();
	obj.getData_1();	
	
	
	return 0;
}







