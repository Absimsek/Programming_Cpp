#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    //task 4: Develop a program that asks the user for their first name and last name. 
    //The program should then append this information to a file named "names.log". 
    //Each entry should be on a new line in the format "FirstName LastName".

    cout<<"\ntask 4 output: "<<endl;
    string firstName, lastName;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    ofstream namesFile("lab03_names.log", ios::app);
    
    if (namesFile.is_open()) {
        namesFile << firstName << " " << lastName << endl;
        namesFile.close();
        cout << "Name appended to names.log successfully." << endl;
    } else {
        cout << "Error opening file." << endl;
    }
}