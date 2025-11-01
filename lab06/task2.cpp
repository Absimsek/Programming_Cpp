#include <iostream>
#include <fstream>
using namespace std;

/*
Define a Student class with private members: string name and int id, string
adress, string favourite_color.
• Create a public method saveToFile() that appends the student's properties to a file
named "students.log".
• In main(), create two Student objects and call their saveToFile() methods.
*/

class Student {
    private:
        string name;
        int id;
        string address;
        string favourite_color;
    public:
        Student(string name, int id, string addr, string color){
            this->name = name;//-> used instead of . because this word uses address of the object
            this->id = id;
            this->address = addr;
            this->favourite_color = color;
            }  

         void saveToFile() {
            ofstream file("students.log", ios::app);//ios::app to append data(adding each execute no delete or overwriting) to the file
            if (file.is_open()) {
                file << "Name: " << name
                        <<", ID: " << id
                        << ", Address: " << address
                        << ", Favourite Color: " << favourite_color << endl;
                file.close();
            } else {
                cout << "Unable to open file";
            }
        }
};

int main() {
    Student student1("Ali", 1, "Ankara", "RED");
    Student student2("Berkay", 2, "Sivas", "BLUE");

    student1.saveToFile();
    student2.saveToFile();

    return 0;
}