//7. WAP to create a class which Set values of data members using default and parameterized constructor.

#include<iostream>
#include<string>

using namespace std;

class student{
	private:		
		string student_name;	
		int student_age;
	
	public:
		//default constructor	
		student(){	
			student_name = "XYZ";
			student_age = 18;
			
			cout<<"---Default constructor---"<<endl;
			cout<<"Student name is: "<<student_name<<endl;
			cout<<"Student age is: "<<student_age<<endl;			
		}
		
	//parameterised constructor	
		student(string name, int a){
				student_name = name;
				student_age = a;
				
				cout<<"---Parameterised constructor---"<<endl;
				cout<<"Student name is: "<<student_name<<endl;
				cout<<"Student age is: "<<student_age<<endl;
	}
	
};
int main(){
	student D;
	student P("ABC", 20);
	
	return 0;
}