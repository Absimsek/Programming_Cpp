#include <iostream>
using namespace std;
//task1
/*
struct Date{
	int day;
	int month;
	int year;
};
int main(){
	Date date1;
	cout << "please enter the date"<<endl;
	cout << "enter day"<<endl;
	cin>>date1.day;
	cout << "enter month"<<endl;
	cin>>date1.month;
	cout << "enter year"<<endl;
	cin>>date1.year;
	
	cout<<"the date given is :"<<date1.day<<"/"<<date1.month<<"/"<<date1.year<<endl;

	return 0;
}
*/

//task 2
struct Address{
	string city ;
	string street;
	int houseNo;
};
struct Student{
	string id;
	string name;
	Address addr;
};
int main(){
	Student student1;
	cout<<"please enter the values"<<endl;
	cout<<"ID"<<endl;
	cin>>student1.id;
	cout<<"name"<<endl;
	cin>>student1.name;
	cout<<"City"<<endl;
	cin>>student1.addr.city;
	cout<<"street"<<endl;
	cin>>student1.addr.street;
	cout<<"houseNo"<<endl;
	cin>>student1.addr.houseNo;
	
	cout<<"Student Name :"<<student1.name<< endl;
	cout<<"Student Id : "<< student1.id<<endl;
	cout<<"Student Address :"<<student1.addr.houseNo<<","<<student1.addr.street<<","<<student1.addr.city<<endl;
}
