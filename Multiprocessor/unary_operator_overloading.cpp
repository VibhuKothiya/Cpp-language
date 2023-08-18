//4.  WAP for unary increment (++) and decrement (--) operator overloading.

#include<iostream>

using namespace std;

class maths{
	public:
		int x, y;		
	
	void set(int x){
		this->x = x;
				
	}
	void get(){
			
		cout<<"X = "<<x<<endl;
		
	}
	operator++(int){
		return x++;
	}
	
	
	void setD(int y){
		
		this->y = y;		
	}
	void getD(){			
		
		cout<<"Y = "<<y<<endl;
	}
	operator--(int){
		return y--;
	}
};
int main(){
	maths M;
	//increment
	M.set(5);
	cout<<"-- increment (++) operator overloading--"<<endl;
	M.get();
	M++;		//M.operator++(int)
	M.get();
	
	//Decrement
	M.setD(10);
	cout<<"-- decrement (--) operator overloading--"<<endl;
	M.getD();
	M--;		//M.operator--(int)
	M.getD();
	

	return 0;
}
