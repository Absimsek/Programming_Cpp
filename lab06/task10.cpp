#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*
Assume you have a file "data.txt" where each line contains a brand and
year (e.g., "Ford 2020").
• Use the Car class from Task 5.
• In main(), read from "data.txt" and store the information in an array of Car objects.
• After reading, loop through the array and print the details of each car.
*/

class Car{

public:
    string brand;
    int year;

};

int main() {
   
    ifstream file("data.txt");
    if (!file) {
        cout << "Unable to open file data.txt";
        return 1;
    }
    const int MAX_CARS = 100;
    Car cars[MAX_CARS];
    int count = 0;
    while (file >> cars[count].brand >> cars[count].year) {
        count++;
        if (count >= MAX_CARS) {
            break; // Prevent overflow
        }
        
    }
    file.close();
    
    for (int i = 0; i < count; i++) {
        cout << "Car Brand: " << cars[i].brand << ", Year: " << cars[i].year << endl;
    }

    return 0;
}