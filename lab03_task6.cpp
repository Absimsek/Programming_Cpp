#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(){

    //task6
    //Create a rogram that copies the content of a file named "source.txt" to new file named "destination.txt".
    //If "destination.txt" already exists, it should be overwritten.
    ifstream sourceFile("lab03_source.txt");
    ofstream destFile("lab03_destination.txt");
    string line;
    if (sourceFile.is_open() && destFile.is_open()) {
        while (getline(sourceFile, line)) {
            destFile << line << endl;
        }
        sourceFile.close();
        destFile.close();
        cout << "File copied successfully." << endl;
    } else {
        cout << "Error opening files." << endl;
    }
    return 0;
}