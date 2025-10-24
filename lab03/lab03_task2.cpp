#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int calcArea(int width, int height) {
    return width * height;
}
int main (){
     //task2 write a function that takes the width and height of a rectangle as user input. 
    //The function should then calculate the area of the rectangle, create a file named "rectangle_area.txt", 
    //and write the calculated area into the file.
    cout<<"\ntask 2 output: "<<endl;
    int width, height;
    cout << "Enter width of the rectangle: ";
    cin >> width;
    cout << "Enter height of the rectangle: ";
    cin >> height;
    int area = calcArea(width, height);
    ofstream areaFile("lab03_rectangle_area.txt");
    if (areaFile.is_open()) {
        areaFile << area << endl;
        areaFile.close();
    } else {
        cout << "Error creating file." << endl;
    }
    return 0;

}