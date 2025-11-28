// Objective: Use iterators to traverse a vector.
// Instructions:
// 1. Create a vector num = {1, 2, 3}.
// 2. Define an iterator and set it to
// num.begin().
// 3. Print the first element using *iter.
// 4. Move the iterator to the next element and
// print again.
// 5. Finally, use num.end() - 1 to print the last
// element.

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main(){
    vector<int> num ={1,2,3};
    vector<int>::iterator iter = num.begin();
    cout << *iter << endl; // Print first element
    ++iter; // Move to next element
    cout << *iter << endl; // Print second element
    iter = num.end() - 1; // Move to last element
    cout << *iter << endl; // Print last element
    return 0;
    
}