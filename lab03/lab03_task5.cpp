#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(){
    //task5
    //write a program that reads the contents of "sample.txt" file character by character using the get() function 
    //and counts the number of characters in the file. Display the total character count in the console.
    ifstream inputFile("lab03_sample.txt");
    if (!inputFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }
    char ch;
    int charCount = 0;
    while (inputFile.get(ch)) {
        charCount++;
    }
    inputFile.close();
    cout << "Total number of characters in the file: " << charCount << endl;
    return 0;
}