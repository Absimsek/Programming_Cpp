#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int calcArea(int width, int height) {
    return width * height;
}
int main (){
    //task 1 create a program that asks the user for a filename.
    //the program should then create a file with that name and write "Hello, World!" into it.
    cout<<"\ntask 1 output: "<<endl;
    string filename;
    cout << "Enter a filename: ";
    cin >> filename;
    ofstream file(filename);
    if (file.is_open()) {
        file << "Hello, World?" << endl;
        file.close();
    } else {
        cout << "Error creating file." << endl;
    }

   
}