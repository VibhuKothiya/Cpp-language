//3. WAP to create class to read time in seconds and convert into time in (HH:MM:SS) format.

#include<iostream>
using namespace std;

class Time{
	public : 
		int seconds;
		int min = 0;
		int hr = 0;	
};

int main(){
	Time t1;
	
	cout<<"Enter seconds: ";
	cin>>t1.seconds;
	
	while(t1.seconds >= 60){
		t1.min++;
		t1.seconds-=60;
	}
	while(t1.min >= 60){
		t1.hr++;
		t1.min-=60;
	}
	 
	cout<<"Time = "<<t1.hr<<"HH:"<<t1.min<<"MM:"<<t1.seconds<<"SS";	
	
	return 0;
}
