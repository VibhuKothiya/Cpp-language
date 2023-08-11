//1. WAP to create a class Employee with setter and getter. Which have fields like id, name, role, salary, experience, address, email and contact. Get 5 records.

#include<iostream>
#include<string.h>
using namespace std;

class Employee{
	public:
		int id;
		char name[100];
		char role[100];
		int salary;
		int experience;
		char adress[100];
		char email[50];
		char contact[10];	
	
	void setData(){
		cout<<"Enter employee id: ";
		cin>>id;
		cout<<"Enter employee name: ";
		cin>>name;
		cout<<"Enter employee role: ";
		cin>>role;
		cout<<"Enter employee salary: ";
		cin>>salary;
		cout<<"Enter employee experience: ";
		cin>>experience;
		cout<<"Enter employee adress: ";
		cin>>adress;
		cout<<"Enter employee email-id: ";
		cin>>email;
		cout<<"Enter employee contact: ";
		cin>>contact;	
	
	}
	void getData(){
		cout<<"Employee Id: "<<id<<endl
			<<"Employee Name: "<<name<<endl
			<<"Employee role: "<<role<<endl
			<<"Employee Salary: "<<salary<<endl
			<<"Employee Experience: "<<experience<<endl
			<<"Employee Adress: "<<adress<<endl
			<<"Employee Email-id: "<<email<<endl
			<<"Employee Contact No.: "<<contact<<endl;
	
	}	
	
};

	int main(){
		Employee emp[100];
		int i, n;
		
		cout<<"Enter how many employee's data: ";
		cin>>n;
		
		for(i=0; i<n; i++){
			emp[i].setData();
			cout<<endl;
		}
		
		for(i=0; i<n; i++){
			emp[i].getData();
			cout<<endl;
		}
		
		
		return 0;
	}






