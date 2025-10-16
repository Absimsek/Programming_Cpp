#include <iostream>
using namespace std;
//task 5
int main(){
	int a=10;
	int *p=&a;
	cout<<"value : "<< a<<endl;
	cout<<"Address : "<< &a<<endl;
	cout<<"value through pointer : "<< *p<<endl;
	*p=20;
	cout<<"---------------------------------"<<endl;
cout<<"value has been changed "<<endl;
	cout<<"value : "<< a<<endl;
	cout<<"value through pointer : "<< *p<<endl;
	cout<<"Address : "<< &a<<endl;
}
