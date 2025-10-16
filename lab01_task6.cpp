#include <iostream>
using namespace std;
//task 6
void ptr(int * p){
cout<<"inside function  before value change: " <<*p<<endl;
*p+=10;
cout<<"inside function  after value change: " <<*p<<endl;
}

int main(){
	int a=10;
	cout<<"before function call : "<<a<<endl;
	ptr(&a);
	cout<< "after function call : "<<a<<endl;
	return 0;
}
