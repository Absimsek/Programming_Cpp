// to find the length of an array we use sizeof() method which gives the size in bytes
// to find the length that size found should be divided by the size of single element
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size= sizeof(arr);
    cout << "Size in bytes: " << size << endl;
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of the array: " << length << endl;
    return 0;
}