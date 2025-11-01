#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*
Write a function double getAverage(string filename) that:
1. Reads all integers from the given file (e.g., "grades.txt").
2. Stores them in an array.
3. Calculates and returns the average of these numbers.
• In main(), call this function and print the returned average
*/

double getAverage(string filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Unable to open file";
        return 0.0;//0.0 is same as 0 but 0.0 said to be more clear ask it????????
    }

    const int MAX_SIZE = 100;//assigned to variable due to take max of specified number in while loop
    int numbers[MAX_SIZE];
    int count = 0;
    int sum = 0;

    while (file >> numbers[count] && count < MAX_SIZE) {// max size used here so that ifstream reads max 100 numbers
        sum += numbers[count];
        count++;
    }
    file.close();

    if (count == 0) return 0.0; // Avoid division by zero

    return static_cast<double>(sum) / count;// same as (double)sum / count but safer and easier to find
    //ask the static_cast ?????????
}
int main() {
    string filename = "grades.txt";
    double average = getAverage(filename);
    cout << "Average: " << average << endl;
    return 0;
}