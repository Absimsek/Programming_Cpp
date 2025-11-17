/*
create a vector nums = {10,20,30,40}
add two new numbers using push_back().
remove the last element using pop_back().
display whether the vector is empty or not using empty().
clear all elemennts using clear() and print the new size

*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {10, 20, 30, 40};

    // Add two new numbers using push_back()
    nums.push_back(50);
    nums.push_back(60);

    // Remove the last element using pop_back()
    nums.pop_back();

    // Display whether the vector is empty or not using empty()
    if (nums.empty()) {
        cout << "The vector is empty." << endl;
    } else {
        cout << "The vector is not empty." << endl;
    }

    // Clear all elements using clear() and print the new size
    nums.clear();
    cout << "The size of the vector after clearing is: " << nums.size() << endl;

    return 0;
}