// Task 9: Vector from Array
// Objective: Convert an array into a vector and
// manipulate it.
// Instructions:
// 1. Create an array int arr[5] = {12, 7, 9, 21,
// 13};
// 2. Convert it into a vector using:
// vector<int> v(arr, arr + 5);
// 3. Remove the last element with pop_back(),
// then add 15 using push_back().
// 4. Print all elements and show the total size.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr [5] = {12, 7, 9, 21, 13};
    // Step 2: Convert array to vector
    vector<int> v(arr, arr + 5);
    v.pop_back(); // Remove last element
    v.push_back(15); // Add 15 to the end
    // Step 4: Print all elements and size
    cout << "Vector elements: ";
    for (const auto& elem : v) {
        cout << elem << " ";
    }
    cout << "\nTotal size: " << v.size() << endl;
    return 0;
}