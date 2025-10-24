#include <iostream>
using namespace std;
// task 7
int main(){
	int arr[5]={10,20,30,40,50};
	int *p=arr;
	for(int i=0;i<5;i++){
		cout<<*(p+i)<<endl;
	}
}
