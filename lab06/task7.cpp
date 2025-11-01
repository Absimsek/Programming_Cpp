#include <iostream>
using namespace std;
/*
Write a void function swap(int *ptrA, int *ptrB).
• This function must take two integer pointers as arguments and swap the values stored
at those memory addresses.
In main(), define int a = 10 and int b = 20. Call the swap function using the addresses
of a and b.
• After the function call, print the values of a and b to show they have been swapped
*/

void swap(int *ptrA, int *ptrB) {
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main() {
    int a = 10;
    int b = 20;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    swap(&a, &b);

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}