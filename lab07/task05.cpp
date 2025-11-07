// Objective: Use 'new' to dynamically allocate a struct 'Car' with members brand and year.
// Assign values via pointer and print them. Then free memory using delete.

#include <iostream>
#include <string>
using namespace std;
struct Car {
    string brand;
    int year;
};
int main() {
   
    Car* myCar = new Car;

   
    myCar->brand = "Toyota";
    myCar->year = 2020;
    cout << "Brand: " << myCar->brand << ", Year: " << myCar->year << endl;
    delete myCar;
    return 0;
}