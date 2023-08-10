//4. WAP to create a class which Read and Print House details along with Room details.

#include<iostream>
#include<string.h>
using namespace std;

class House{
	public:
		int house_No;
		char soc_Name[100];
		char house_type[100];
		int floors;
		char aminities[100];
		char area[100];
		char landmark[100];
		char city[100];
		int pincode;
		
	void setData(){
		cout<<"Enter House No.: ";
		cin>>house_No;
		cout<<"Enter Society Name: ";
		cin>>soc_Name;
		cout<<"Enter House Type: ";
		cin>>house_type;
		cout<<"Enter No. of floors: ";
		cin>>floors;
		cout<<"Enter Aminities of house: ";
		cin>>aminities;
		cout<<"Enter area in which house is located: ";
		cin>>area;
		cout<<"Enter nearest famous landmark : ";
		cin>>landmark;
		cout<<"Enter City: ";
		cin>>city;
		cout<<"Enter Pincode: ";
		cin>>pincode;
	}	
	void getData(){
		cout<<"----House Details----"<<endl;
		cout<<"House No.: "<<house_No<<endl
			<<"Society Name: "<<soc_Name<<endl
			<<"House Type: "<<house_type<<endl
			<<"No. of floors: "<<floors<<endl
			<<"Aminities are: "<<aminities<<endl
			<<"Area: "<<area<<endl
			<<"Famous landmark: "<<landmark<<endl
			<<"City: "<<city<<endl
			<<"Pincode: "<<pincode<<endl;	
	
	}
		
};

class Room{
	public:
		int total_bedrooms;
		int l,w,h;
		
	void setData(){
		cout<<"Enter Total nos. of rooms: ";
		cin>>total_bedrooms;
		cout<<"Enter Length: ""Width: ""Height: ";
		cin>>l>>w>>h;
		
	}	
	void getData(){
		cout<<"----Room's Details----"<<endl;
		cout<<"Total nos. of rooms: "<<total_bedrooms<<endl
			<<"Room's area: "<<l*w*h;		
	}	
	
};

int main(){
	House H;
	Room R;
	
	cout<<"----Enter House Details----"<<endl;
	H.setData();
	cout<<"----Enter Rooms Details----"<<endl;
	R.setData();
	
	H.getData();	
	R.getData();	
	
	
	return 0;
}
