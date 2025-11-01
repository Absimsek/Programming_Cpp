#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*
Write a program that opens a text file (e.g., "students.log" from Task 2).
• It must read the file line by line using getline() and count how many lines are in the
file.
• The program should then print the total line count to the console.
*/

int main() {
    ifstream file("students.log");
    if (!file) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    string line;
    int lineCount = 0;

    while (getline(file, line)) {
        lineCount++;
    }

    file.close();

    cout << "Total number of lines: " << lineCount << endl;

    return 0;
}
