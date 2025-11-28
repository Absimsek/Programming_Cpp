// Task 10: Array vs. Vector Comparison
// Objective: Observe the difference between static
// arrays and dynamic vectors.
// Instructions:
// 1. Create an array int arr[3] = {1, 2, 3};
// 2. Create a vector vector<int> v = {1, 2, 3};
// 3. Add a new element 4 to the vector using
// push_back().
// 4. Try adding an element to the array and
// observe the error.
// 5. Tell a short explanation of why vectors are
// more flexible than arrays.

#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int arr [3]={1,2,3};
    vector<int> v={1,2,3};
    v.push_back(4); 
    // arr.push_back(4); //error: request for member 'push_back' in 'arr', which is of non-class type 'int [3]'
    cout << "Array elements: ";
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nVector elements: ";
    for (const auto& elem : v) {
        cout << elem << " ";
    }
    cout << "\n\nExplanation: Vectors are more flexible than arrays because"
    <<" they can dynamically resize themselves to accommodate more elements using functions"
    <<" like push_back(). In contrast, arrays have a fixed size defined at compile time,"
    <<" and attempting to add more elements than their allocated size results in"
    <<" errors or undefined behavior." << endl;
    return 0;
}