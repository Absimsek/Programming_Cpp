/*
create vecctor values(3,0) (3 elements initialized to 0)
print its size() and capacity()
use resize(6,5) to expand the vector with default value 5
print all elements again and show the new size and capacity
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {

vector<int> values(3,0);
cout<<"Size: "<<values.size()<<", Capacity: "<<values.capacity()<<endl;
values.resize(6,5);
cout<<"Elements: ";
for(const int& val : values){
    cout<<val<<" ";
}
cout<<endl;
cout<<"Size: "<<values.size()<<", Capacity: "<<values.capacity()<<endl;
return 0;

}
