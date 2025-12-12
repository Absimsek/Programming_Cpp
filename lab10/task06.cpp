#include <iostream>
#include <string>
#include <exception>
#include <map>
using namespace std;
/*
1. Create a map people with at least 3
entries.
2. Use count("John") to check
whether "John" exists and print the
result.
3. Use find("SomeName") and
compare iterator result with end()
to decide “found / not found”.
4. If found, print the key and value
using it->first and it->second.
*/
int main(){
    map<string,int> people={{"a",1},{"b",2},{"john",3}};
    cout<<"Count john: "<<people.count("john")<<endl;
    string name="b";
    auto it=people.find(name);
    if(it!=people.end()){
        cout<<"Found: "<<it->first<<" -> "<<it->second<<endl;
    } else {
        cout<<"Not found"<<endl;
    }
    
}