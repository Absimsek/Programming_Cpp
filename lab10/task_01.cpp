
#include <iostream>
#include <string>
#include <exception>
#include <map>
using namespace std;

/*
1. Include the required header(s)
(#include <map> and #include
<iostream>).
2. Create a map named student with
int keys and string values.
3. Initialize it with at least 3 key–
value pairs using an initialization
list.
4. Print all pairs using a range-based
for loop with .first and .second.
*/
int main(){
    map<int,string> student = {{1,"ali"},{2,"berkay"}, {3,"simsek"}};

    for(const auto& pair : student){
        cout << pair.first << " - " << pair.second << endl;
    }

}