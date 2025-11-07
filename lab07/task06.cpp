// Objective: Declare a pointer to a function that takes two integers and returns a bool. Assign it
// to a compare() function that checks if one number is greater than another.
#include <iostream>
using namespace std;

bool compare(int a, int b) {
    return a > b;
}
int main() {
    bool (*pf)(int, int); //no need access because function is global function
    pf = &compare; 

    int x = 10, y = 20;
    if (pf(x, y)) {
        cout << x << " is greater than " << y << endl;
    } else {
        cout << x << " is not greater than " << y << endl;
    }

    return 0;
}