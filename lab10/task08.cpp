#include <iostream>
#include <string>
#include <exception>
#include <map>
using namespace std;
/*
1. Ask the user to input two integers a
and b.
2. In a try block, if b == 0, throw 0;
otherwise print a / b.
3. Catch the thrown integer in a
catch(int e) block and print a meaningful
message (not just 0).
4. Print "End of program" after the
try/catch completes.
*/

int main(){
    int a,b;
    cout<<"Enter two integers (a b): ";
    cin>>a>>b;
    try{
        if(b==0){
            throw 0;
        } else {
            cout<<"Result: "<<a/b<<endl;
        }
    } catch(int e){
        cout<<"Error: Division by zero is not allowed."<<endl;
    }
    cout<<"End of program"<<endl;
}