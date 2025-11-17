//learn how to create a vector and store elements
/*
Instructions 
1 create vector and scores of type int
2 use push_back() to add three values to year
3 print all elements using a loop
4 Display the total number of elements using scores.size()
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> scores;
    scores.push_back(88);
    scores.push_back(67);
    scores.push_back(79);
    for( int i = 0; i < scores.size(); ++i){
        cout << "Score " << i + 1 << ": " << scores[i] << endl;
    }
    cout << "Total number of scores: " << scores.size() << endl;
    return 0;
}