#include <iostream>
#include <string>
#include <exception>
#include <map>
using namespace std;
/*
1. Create a map people with at least 3
entries.
2. Remove one element by key using
erase(key).
3. Print remaining elements using a
loop.
4. Clear the entire map using clear()
and print people.size()
*/

int main(){
    map<string,int> people={{"a",1},{"b",2},{"c",3}};
    for(auto person:people){cout<<person.first<<"-"<<person.second<<endl;}
    cout<<"---------------------------------"<<endl;
    people.erase("a");
    for(auto person:people){cout<<person.first<<"-"<<person.second<<endl;}
    people.clear();
    people.size();
}