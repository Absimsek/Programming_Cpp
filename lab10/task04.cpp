
#include <iostream>
#include <string>
#include <exception>
#include <map>
using namespace std;
/*
1. Create a map people (string → int)
with at least 2 initial entries.
2. Add 2 new entries using
people["Name"] = value;.
3. Add 2 new entries using
people.insert({key, value}); (or
make_pair).
4. Print the full map after insertions.
*/
int main(){
    map<string,int> people={{"ali",20},{"berkay",21}};
    for(auto person:people){ cout << person.first<<"-"<<person.second<<endl;}
    cout<<"--------------------------------------------"<<endl;
    people["simsek"]=22;
    people["ali2"]=23;
    for(auto person:people){ cout << person.first<<"-"<<person.second<<endl;}
    people.insert({"ali3",24});
    people.insert({"ali4",25});
    for(auto person:people){ cout << person.first<<"-"<<person.second<<endl;}

}