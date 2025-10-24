#include <iostream>
using namespace std;
//task 3
struct Student {
string id;
string name;
int marks;

};
int main(){
	cout<<"please enter the inputs of students"<<endl;
	Student s1,s2,s3;
	Student students[3]={s1 , s2 , s3};
	
	for(int i=0;i<3;i++){
		cout<< "student "<< i<<"'s"<<endl;
		cout<< "name "<<endl;
		cin>>students[i].name;
		cout<<"id "<<endl;
		cin>> students[i].id;
		cout<<"marks "<<endl;
		cin>> students[i].marks;
	}
	
	for(int i=0;i<3;i++){
		cout<< "student "<< i<<"'s"<<endl;
		cout<< "name :";
		cout<<students[i].name<<endl;
		cout<<"id :";
		cout<<students[i].id<<endl;
		cout<<" marks :";
		cout<< students[i].marks<<endl;
	}
	return 0;}
