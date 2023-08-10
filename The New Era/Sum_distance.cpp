//1. WAP to create a class to read and add two distance. (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)

#include<iostream>
#include<string>

using namespace std;
class Distance{	
	public :
		int feet;
		int inch;
};

int main()
{
	Distance D1, D2, sum;
	
	cout<<"-----Enter first distance-----"<<endl;
	
	cout<<"Enter feet: "<<endl;
	cin>>D1.feet;
	
	cout<<"Enter inch: "<<endl;
	cin>>D1.inch;
	
	cout<<"-----Enter second distance-----"<<endl;
	
	cout<<"Enter feet: "<<endl;
	cin>>D2.feet;
	
	cout<<"Enter inch: "<<endl;
	cin>>D2.inch;
	
	sum.feet = D1.feet + D2.feet;
	sum.inch = D1.inch + D2.inch;
	
	while(sum.inch >= 12){
		sum.feet++;
		sum.inch-=12;
	}
	
	cout<<"Sum of feet is: "<<sum.feet<<endl;
	cout<<"Sum of inch is: "<<sum.inch<<endl;
	
	
	return 0;
}
