//2. WAP to create a class that contains four member functions, with 0, 1, 2, and 3 int arguments, respectively. 
//Create a main( ) that makes an object of your class and calls each of the member functions. 
//Now modify the class so it has instead a single member function with all the arguments defaulted.

#include <iostream>
using namespace std;

 class Myclass{
 		public:
 			
 		void fun1(){
 			
 			cout<<"i m form 0 argument function"<<endl;
		 }
		 
		 void fun2(int a){
 			cout<<"i m form 1 argument function: "<<a<<endl;
		 }
		 
		 void fun3(int a, int b){
 			cout<<"i m form 2 arguments function: "<<a<<" "<<b<<endl;
		 }
		 
		 void fun4(int a, int b, int c){
 			cout<<"i m form 3 arguments function: "<<a<<" "<<b<<" "<<c<<endl;
		 }
		 
		 void funAll(int a = 0, int b = 0, int c = 0){
		 	cout<<"Function with default arguments: "<<a<<", "<<b<<", "<<c<<endl;
		 }
 };

int main(){
	Myclass M;
	M.fun1();
	M.fun2(10);
	M.fun3(20,30);
	M.fun4(40,50,60);
	
	cout<<"---All arguments defaulted---"<<endl;
	M.funAll();
	M.funAll(100);
	M.funAll(200, 300);
	M.funAll(400, 500, 600);
	
	
}