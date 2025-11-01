#include <iostream>
using namespace std;
/*
Define a Circle class with a private member double radius.
• Write a non-member (helper) function void printCircleInfo(Circle c) that takes a Circle
object, calculates its area ($\pi \times r^2$), and prints the radius and area.
• Hint: You will need a public getRadius() getter method in your class.
• In main(), create a Circle object and pass it to the printCircleInfo function.
*/

class Circle {
private:
    double radius;
    public:
    Circle(double r){
        radius = r;
    }
    double getRadius() {
        return radius;
    }
};
const double PI = 3.14;//global declaration of PI so all functions can access it if needed
void printCircleInfo(Circle c) {
    cout << "Radius: " << c.getRadius() << endl;
   double area = PI * c.getRadius() * c.getRadius();
    cout << "Area: " << area << endl;

}

int main() {
    Circle myCircle(5.0);

    printCircleInfo(myCircle);

    return 0;

}

