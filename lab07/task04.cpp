// Objective: Write a function displayPerson(Person p) that takes a struct by value and prints its
// contents. Call it from main() using a Person object.

#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    int age;
};
void displayPerson(Person p){

    cout << "Name: " << p.name << ", Age: " << p.age << endl;
}

int main(){
    Person person1;
    person1.name = "Ali";
    person1.age = 30;
    displayPerson(person1);
    return 0;
}