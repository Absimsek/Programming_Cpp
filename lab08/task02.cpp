/*
practice modern c++11 syntax with vectors
Instructions
1. declare a vector named scores and initialize it with {88,67,79,84}
2. print the elements using both of traditional for loop and a range-based for loop
3. In a comment, explain the difference between two loop types

*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> scores = {88, 67, 79, 84};

    // Traditional for loop
    cout << "Using traditional for loop:" << endl;
    for (int i = 0; i < scores.size(); ++i) {
        cout << "Score " << i + 1 << ": " << scores[i] << endl;
    }

    // Range-based for loop
    cout << "Using range-based for loop:" << endl;
    for (const int& score : scores) {
        cout << "Score: " << score << endl;
    }


    return 0;
}