#include <iostream>
using namespace std;

/*
Create two overloaded functions named printInfo().
1. void printInfo(string name, int age): Prints "Name: [name], Age: [age]".
2. void printInfo(string course, int code): Prints "Course: [course], Code: [code]".
• In main(), call both versions of the function with sample data to demonstrate
overloading.
*/

void printInfo(string name, int age) {
    cout << "Name: " << name << ", Age: " << age << endl;
}
// void printInfo(string course, int code) {
//     cout << "Course: " << course << ", Code: " << code << endl;
// }

int main() {
    printInfo("Berkay",21);//calls first function
    printInfo("Programming C++",101);//also calls first function
    //both functions have same name and same parameter types
    //also both is at same order which means exactly same functions they are
    //changing the parameter name is not enough for function overloading so this task cannot appliable.
    return 0;
}