//5. WAP to add two distances using binary plus (+) operator overloading.
#include<iostream>
using namespace std;

class Distance{
	private:
	int feet, inch;
	
	public:
	void set(int feet, int inch){
		this -> feet = feet;
		this -> inch = inch;
	}
	
	void get(){
		cout<<feet<<" feet "<<inch<<" inch"<<endl;
	}
	
	Distance operator+(Distance n){
		Distance temp;
		temp.feet =  this -> feet + n.feet;
		temp.inch =  this -> inch + n.inch;
		
			while(temp.inch >= 12){
				temp.feet++;
				temp.inch -= 12; 
			}
			return temp;
	}
	
};

int main(){
	Distance D1, D2, sum;
	cout<<"-----Distance 1-----"<<endl;
	D1.set(5, 10);
	D1.get();
	cout<<"-----Distance 2-----"<<endl;
	D2.set(10, 20);
	D2.get();
	
	sum = D1 + D2;		//D1.operator+(D2)
	cout<<"-----Sum of distances-----"<<endl;
	sum.get();
	
	return 0;
}