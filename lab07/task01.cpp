//Objective: Define a struct named 'Person' with members name (string), age (int), and initial
// (char). In main(), create an object, assign values, and print them using the dot operator.

#include <iostream>
#include <string>

using namespace std;
struct Person {
    string name;
    int age;
    char initial;
};

int main(){
    Person person;

    person.name = "Ali";
    person.age = 30;
    person.initial = 'A';
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Initial: " << person.initial << endl;
    return 0;
}