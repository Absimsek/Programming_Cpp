#include <iostream>
#include <string>
#include <exception>
#include <map>
using namespace std;
/*
1. Create a map people with at least 2
entries.
2. Ask the user for a name (string
key).
3. In a try block, attempt to print
people.at(name). (Choose a name that may
not exist.)
4. Catch the error by reference
(recommended) and print e.what().
*/

int main(){
    map<string,int> people={{"Alice",30},{"Bob",25}};
    string name;
    cout<<"Enter a name: ";
    cin>>name;
    try{
        people.at(name); // may throw
        cout<<name<<" is "<<people.at(name)<<" years old."<<endl;//prints if no exception
    } catch(const out_of_range& e){
        cout<<"Error: "<<e.what()<<endl;
    }
}