// Task 8: Multidimensional Vectors
// Objective: Work with 2D vectors as matrices.
// Instructions:
// 1. Create a 3×4 2D vector initialized with
// zeros:
// vector<vector<int>> matrix(3,
// vector<int>(4, 0));
// 2. Print the matrix row by row using nested
// loops.
// 3. Update matrix[1][2] = 99 and print the
// updated matrix.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Step 1: Create a 3x4 2D vector initialized with zeros
    vector<vector<int>> matrix(3, vector<int>(4, 0));

    // Step 2: Print the matrix row by row using nested loops
    cout << "Initial matrix:" << endl;
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    // Step 3: Update matrix[1][2] = 99
    matrix[1][2] = 99;

    // Print the updated matrix
    cout << "Updated matrix:" << endl;
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}