//3. WAP to create two class HighSchool and College with fields like id, stu_name, stu_roll_no, stu_standard, stu_age, stu_contact, stu_edu_institute_name and stu_address. Make suitable setter and getter with use of static data members.

#include<iostream>
#include<string.h>
using namespace std;

class Highschool{
	public:
		int id;
		char student_name[100];
		int student_roll_no;
		int student_standard;
		int student_age;
		char student_contact[100];
	static char student_edu_institute_name[100];		//static data member
		char student_adress[100];
		
		void setData(){
			cout<<"Enter the student id: ";
			cin>>id;
			cout<<"Enter the student name: ";
			cin>>student_name;
			cout<<"Enter the student roll No. ";
			cin>>student_roll_no;
			cout<<"Enter the student standard: ";
			cin>>student_standard;
			cout<<"Enter the student age: ";
			cin>>student_age;
			cout<<"Enter the student contact No. ";
			cin>>student_contact;
			cout<<"Enter the student adress: ";
			cin>>student_adress;
		}
		
		void getData(){
			cout<<"Student Id: "<<id<<endl
				<<"Student Name: "<<student_name<<endl
				<<"Student Roll No. "<<student_roll_no<<endl
				<<"Student Standard: "<<student_standard<<endl
				<<"Student age: "<<student_age<<endl
				<<"Student Contact No. "<<student_contact<<endl
				<<"Student Adress: "<<student_adress<<endl;		
			
		}			
};
class College{
	public:
		int id;
		char student_name[100];
		int student_roll_no;
		int student_standard;
		int student_age;
		char student_contact;
	static char student_edu_institute_name[100];		//static data member
		char student_adress[100];
		
		void setData(){
			cout<<"Enter the student id: ";
			cin>>id;
			cout<<"Enter the student name: ";
			cin>>student_name;
			cout<<"Enter the student roll No. ";
			cin>>student_roll_no;
			cout<<"Enter the student standard: ";
			cin>>student_standard;
			cout<<"Enter the student age: ";
			cin>>student_age;
			cout<<"Enter the student contact No. ";
			cin>>student_contact;
			cout<<"Enter the student adress: ";
			cin>>student_adress;
		}
		
		void getData(){
			cout<<"Student Id: "<<id<<endl
				<<"Student Name: "<<student_name<<endl
				<<"Student Roll No. "<<student_roll_no<<endl
				<<"Student Standard: "<<student_standard<<endl
				<<"Student age: "<<student_age<<endl
				<<"Student Contact No. "<<student_contact<<endl
				<<"Student Adress: "<<student_adress<<endl;		
			
		}			
};
char Highschool :: student_edu_institute_name[] = "Suman highschool";		
char College :: student_edu_institute_name[] = "RNW IT Institute";

int main(){
	Highschool H;
	College C;
	
	H.setData();
	cout<<"Highscholl Name : "<<H.student_edu_institute_name<<endl;
	H.getData();
	cout<<endl;		
	
	H.setData();
	cout<<"College Name : "<<C.student_edu_institute_name<<endl;
	H.getData();
	
	
	return 0;
}