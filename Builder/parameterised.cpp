//6. WAP to demonstrate example of parameterized constructor.

#include<iostream>
#include<string.h>
using namespace std;

	class maths{
		public:
				
		int sum = 0;
		
		maths(int a, int b = 0){					//parameterised constructor
			sum = a + b;
			cout<<"Sum is: "<<sum<<endl;
		}
		
		maths(){									//default constructor	
			
		}
		
		
	};
	
int main(){
	maths M(50, 25);		//parameterised constructor with 2 value pass, b is overridden by value 25
	maths M1(50);			//parameterised constructor with 1 value pass, b take default value 0 
	maths M2;				//default constructor
	
	return 0;
}	