#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int grades[3];
    int average;

    int calculateAverage(){
        int sum = 0;
        for(int i = 0; i < 3; i++){
            sum += grades[i];
        }
        average = sum / 3;
        return average;
    }

};

int main(){
    Student s1;
    s1.name = "Berkay";
    s1.grades[0] = 85;
    s1.grades[1] = 90;
    s1.grades[2] = 78;
    cout << "average of grades: " << s1.calculateAverage() << endl;
    return 0;
}