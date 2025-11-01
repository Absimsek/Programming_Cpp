#include <iostream>
using namespace std;

/*
Write a function int sumArray(int arr[], int size) that takes an integer array
and its size as parameters.
• The function should calculate and return the sum of all elements in the array.
• In main(), define an array, call this function, and print the returned sum.
*/

int sumArray(int arr[], int size){

int sum=0;
for(int  i=0;i<size;i++){
sum+=arr[i];
}
    return sum;
}

int main(){
    int arr1[5]= { 1453, 1071, 1934, 1923,1299};
    int size= sizeof(arr1) / sizeof(arr1[0]);
    cout<< "sum : "<< sumArray(arr1,size);
    return 0;
}