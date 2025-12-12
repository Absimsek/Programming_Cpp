
#include <iostream>
#include <string>
#include <exception>
#include <map>
using namespace std;
/*
1. Create a map people with at least 3
entries (name → age).
2. Print one value using
people["John"] style access.
3. Print one value using
people.at("John").
4. Try accessing a missing key with
.at() and observe what happens (do
not crash your program—handle it
in Task 8).
*/

int main(){
    map<string,int> people = {{"ali",20},{"berkay",21},{"john",22}};
    cout<< "fst print :"<< people["john"]<<endl;
    cout<< "snd print :"<< people.at("john")<<endl;

    cout<< "trd print :"<< people.at("simsek");//will throw exception
    

}