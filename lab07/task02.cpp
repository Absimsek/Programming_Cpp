// Objective: Create a pointer to the struct 'Person' and access its members using the arrow
// operator (->).

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
    Person* ptr = &person;

    ptr->name = "Ali";
    ptr->age = 30;
    ptr->initial = 'A';
    cout << "Name: " << ptr->name << endl;
    cout << "Age: " << ptr->age << endl;
    cout << "Initial: " << ptr->initial << endl;
    return 0;
}