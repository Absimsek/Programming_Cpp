// Objective: Create a template function maximum(T a, T b) that returns the larger of two
// values. Test it with int and double values.
#include <iostream>
using namespace std;

template <typename T>// this allows coder to call different types of parameters like overloading but with lesser code and more flexibility
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int int1 = 10, int2 = 20;
    double double1 = 10.5, double2 = 20.5;

    cout << "Maximum of " << int1 << " and " << int2 << " is: " << maximum(int1, int2) << endl;
    cout << "Maximum of " << double1 << " and " << double2 << " is: " << maximum(double1, double2) << endl;

    return 0;
}