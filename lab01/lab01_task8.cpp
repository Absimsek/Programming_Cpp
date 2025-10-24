#include <iostream>
#include <memory>
using namespace std;

// task 8 
/*
int main(){
	int * ptr= new int;
	*ptr=42;
	cout<<"value stored in dynamically allocated memory : "<< *ptr <<endl;
	delete ptr;
	cout<<*ptr;//writes a random number every execution ask it!!!!!!
	return 0;
}
*/

int main(){
	unique_ptr<int> ptr= make_unique<int>(42);
	cout<<"value stored in dynamically allocated memory : "<< *ptr <<endl;

	return 0;
}

