// Objective: Create an array of 3 struct objects named 'Student' with members (name, age). Use
// a for loop to print all student details.

#include <iostream>
#include <string>
using namespace std;

struct Student{
string name;
int age;
};

int main(){
    Student students[3];
    students[0].name = "Ali";
    students[0].age = 20;
    students[1].name = "Berkay";
    students[1].age = 21;
    students[2].name = "Taha";
    students[2].age = 22;
    for(int i=0; i<3; i++){
        cout<<"-----------------------"<<endl;
        cout << "Student " << i+1 << ": " << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout<<"-----------------------"<<endl;
    }
}