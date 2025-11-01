#include <iostream>
using namespace std;
/*
Create a Car class with public members: string brand and int year.
• In main(), create an array that holds 3 different Car objects.
• Use a for loop to iterate through the array and print the brand and year of each car.
*/

class Car{

public:
    string brand;
    int year;

};

int main() {
    Car myCar[3];

    myCar[0].brand = "Toyota";
    myCar[0].year = 2010;

    myCar[1].brand = "Honda";
    myCar[1].year = 2015;

    myCar[2].brand = "Ford";
    myCar[2].year = 2020;

    for(int i = 0; i < 3; i++){
        cout << "Car " << (i + 1) << ": " << myCar[i].brand << ", " << myCar[i].year << endl;
    }

    return 0;
}