#include <iostream>
#include <string>
#include <exception>
#include <map>
using namespace std;
/*
1. Create a map myMap with keys
1..5 and values "One".."Five".
2. Declare an iterator map<int,
string>::iterator it; and loop from begin()
to end().
3. Print each pair using it->first and it-
>second.
4. In one line, print the first element
using begin() and the last element by doing
auto last = myMap.end(); last--;.
*/

int main(){
    map<int,string> myMap={{1,"One"},{2,"Two"},{3,"Three"},{4,"Four"},{5,"Five"}};
    map<int,string>::iterator it;
    for(it=myMap.begin();it!=myMap.end();it++){
        cout<<it->first<<" -> "<<it->second<<endl;
    }
    auto last=myMap.end();
    last--;
    cout<<"First: "<<myMap.begin()->first<<" -> "<<myMap.begin()->second<<endl;
    cout<<"Last: "<<last->first<<" -> "<<last->second<<endl;
}