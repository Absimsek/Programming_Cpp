#include <iostream>

using namespace std;

class Rectangle {
public:
    double length;
    double width;
   double calculateArea() {
        return length * width;
    }
    void displayArea() {
        cout << "Area: " << calculateArea() << endl;
    }
};

int main(){
    Rectangle r1;
    r1.length = 5.5;
    r1.width = 5.5;
    r1.displayArea();
    return 0;
    
}