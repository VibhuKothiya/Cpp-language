//Comparision of times

#include<iostream>
using namespace std;

class Time{
	public :
		int hr, min, sec;
		
		void set(){			
			cout<<"Enter hours: ";
			cin>>hr;
			cout<<"Enter minutes: ";
			cin>>min;
			cout<<"Enter seconds: ";
			cin>>sec;
		}
		void get(){
			cout<<hr<<"HH:"<<min<<"MM:"<<sec<<"SS"<<endl;
		}
		
		Time operator==(Time a){
			
			if(this->hr == a.hr && this->min == a.min && this->sec == a.sec){
				cout<<"Time are same"<<endl;
			}
			else{
				cout<<"Time are not same"<<endl;
			}
		
		}
		
};
int main(){
	Time t1, t2;
	t1.set();	//time 1 enterd
	t2.set();	//time 2 entered 
	cout<<"---Display both times---"<<endl;
	t1.get();	//display both times
	t2.get();
	
	t1 == t2;	//t1.operator == (t2)
	
	
	return 0;
}
