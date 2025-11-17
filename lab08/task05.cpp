/*
create a vector numbers = {1,2,3,4,5}
change the second element to 9 and the last element to 7 using at().
print the  updated vector using a range-based for loop.
comment o why at() is safer tahn direct indexing.

*/

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers = {1,2,3,4,5};
    numbers.at(1)=9;
    numbers.at(numbers.size()-1)=7;
    for(const int& num : numbers){
        cout<<num<<" ";
    }
    return 0;
    
}