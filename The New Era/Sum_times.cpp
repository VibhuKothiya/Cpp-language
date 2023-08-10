//2. WAP to create a class to read and add two times.

#include<iostream>
#include<string>
using namespace std;

class time{
	public:	
		int hr;
		int min;
		int sec;
};

int main(){
	time t1, t2, sum;	
	
	cout<<"-----Enter first time------"<<endl;
	cout<<"Enter hour: ";
	cin>>t1.hr;
	cout<<"Enter minutes: ";
	cin>>t1.min;
	cout<<"Enter second: ";
	cin>>t1.sec;
	
	cout<<"-----Enter second time------"<<endl;
	cout<<"Enter hour: ";
	cin>>t2.hr;
	cout<<"Enter minutes: ";
	cin>>t2.min;
	cout<<"Enter second: ";
	cin>>t2.sec;	
	
	sum.hr  = t1.hr  + t2.hr;
	sum.min = t1.min + t2.min;
	sum.sec = t1.sec + t2.sec;	
	
	while(sum.min>=60){
		sum.hr++;
		sum.min-=60;
	}
	while(sum.sec>=60){
		sum.min++;
		sum.sec-=60;
	}	
	
	cout<<"Sum of hours:   "<<sum.hr<<endl;
	cout<<"Sum of minutes: "<<sum.min<<endl;
	cout<<"Sum of seconds: "<<sum.sec<<endl;
	
	
	return 0;
}
