#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int calcSquare(int num) {
    return num * num;
}
int main(){
    //task3 Create an integer array with 5 elements. Write a program that calculates the square of each element in the array
    // and writes the results to a file named "squares.txt", with each squared number on a new line.

    cout<<"\ntask 3 output: "<<endl;
    int arr[5] = {1, 2, 3, 4, 5};
    ofstream squareFile("lab03_squares.txt",ios::app);
    if (!squareFile.is_open()) {
        cout << "Error creating file." << endl;
        return 1;
    }
    for (int i =0;i<5; i++)
    {
        squareFile << calcSquare(arr[i]) << endl;
    }
    
    return 0;

}