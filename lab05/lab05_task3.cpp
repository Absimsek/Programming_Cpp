#include <iostream>
using namespace std;

class Circle {
    public:
double radius;
double calculateArea() {

        return 3.14 * radius * radius;
    }
    void displayArea() {
        cout << "Area: " << calculateArea() << endl;
    }
};

int main(){
    Circle c1;
    c1.radius = 5;
    c1.displayArea();
    return 0;
    
}