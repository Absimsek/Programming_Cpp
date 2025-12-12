
#include <iostream>
#include <string>
#include <exception>
#include <map>
using namespace std;
/*
1. Create a map student (int → string).
2. Insert student[5] = "Timothy"; then
insert student[5] = "Aaron";.
3. Print student[5] and explain (in a
comment) why only one value
remains for key 5.
4. Update an existing value again
using .at(key) = newValue;.
*/
int main(){
    map<int,string> students={{1,"a"},{2,"b"},{3,"c"},{4,"d"},{5,"e"}};
    students[5]="Timothy";
    cout<< students[5]<<endl;
    students[5]="Aaron";
    cout<< students[5]<<endl;
    //because map keys are unique, when we assign a new value to an existing key,
    //it overwrites the previous value associated with that key.
    students.at(5)="UpdatedName";
    cout<< students[5]<<endl;
    //.at() method is used to update the value for key 5 again.
    //It provides bounds checking and will throw an exception if the key does not exist.
    //In this case, since key 5 exists, it successfully updates the value.
    for (auto student:students)
    {
        cout<< student.first << " - " << student.second <<endl;
    }
    students[6]="NewStudent";// adds a new key-value pair to the map if doesnt exist
    cout<< students[6]<<endl;
    for (auto student:students)
    {
        cout<< student.first << " - " << student.second <<endl;
    }
    

}