#include <iostream>
using namespace std;
/*
Create a void function findMinMax(int arr[], int size, int &min, int &max).
• This function must find the smallest and largest elements in the array and assign them
to the min and max reference variables.
• In main(), define an array, call this function, and print the results.
*/

void findMinMax(int arr[], int size, int &min, int &max) {
    if (size <= 0) return; // Handle empty array case

    min = arr[0];
    max = arr[0];

    for(int i=1; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }
}

int main(){
    int arr[] = {3, 5, 1, 8, 2, -6, 9, -4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    findMinMax(arr, size, min, max);

    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;

    return 0;
}