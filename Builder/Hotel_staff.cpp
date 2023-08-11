//2. WAP to create a class Hotel with fields like id, name, type, staff_size, room_size, establish_year, address, rating_type and website. Illustrate the use of encapsulation (strict encapsulation) with this keyword.

#include<iostream>
#include<string>

using namespace std;

class Hotel{
	public:
		int id;
		string name;
		string type;
		int staff_size;
		int room_size;
		int establish_year;
		string address;
		string rating_type;
		string website;
	
	void setData(int id, string name, string type, int staff_size, int room_size, int establish_year, string address,string rating_type,string website)
	{
		this->id = id;
		this->name = name;
		this->type = type;
		this->staff_size = staff_size;
		this->room_size = room_size;
		this->establish_year = establish_year;
		this->address = address;
		this->rating_type = rating_type;
		this->website = website;	
	}
	
	void getData()
	{
		cout<<"Hotel Id: "<<id<<endl;
		cout<<"Hotel Name: "<<name<<endl;
		cout<<"Hotel Type: "<<type<<endl;
		cout<<"Hotel staff_size: "<<staff_size<<endl;
		cout<<"Hotel room_size: "<<room_size<<endl;
		cout<<"Hotel establish_year: "<<establish_year<<endl;
		cout<<"Hotel address: "<<address<<endl;
		cout<<"Hotel rating_type: "<<rating_type<<endl;
		cout<<"Hotel website: "<<website<<endl;	
		
	}
		
};
	int main(){
		Hotel staff;
		
		staff.setData(1001, "Fountain", "Veg", 300, 150, 2020, "Vesu", "5 star", "www.fountain.com");
		staff.getData();
			
	return 0;	
	}





