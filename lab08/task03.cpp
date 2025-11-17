/*
create a vector finals with {85,90,95}
Instructions
1. create a vector finals scores by copying finals
2. create another vector scores by copying finals
3. compare the two vectors using ==
4. print "Vectors are equal" or "vectors are not equal" depending on the result
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
vector<int> finals = {85, 90, 95};
vector<int> finals_scores = finals;
vector<int> scores = finals;

if(finals_scores == scores){
    cout << "Vectors are equal" << endl;
} else {
    cout << "Vectors are not equal" << endl;
}
    return 0;
}

