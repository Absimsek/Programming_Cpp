#include <iostream>
#include <string>
#include <exception>
#include <map>
using namespace std;
/*
1. Define a custom exception class (e.g.,
class MyException) that has a what()
method returning a message.
2. Write a program that asks the user for a
menu choice:
o 1 → throw your MyException()
o 2 → throw a standard exception
like std::invalid_argument("...")
o else → throw a C-string
"Unknown error"
3. Use multiple catch blocks in this order:
catch(const std::invalid_argument& e)
catch(const MyException& e) (or
catch(MyException e) if you want to
observe copy behavior)
catch(...) and print a generic message
*/

int main(){
    class MyException : public exception {
    public:
        const char* what() const noexcept override {
            return "My custom exception occurred.";
        }
    };

    int choice;
    cout<<"Menu:\n1. Throw MyException\n2. Throw std::invalid_argument\nElse. Throw C-string error\nEnter choice: ";
    cin>>choice;

    try{
        if(choice==1){
            throw MyException();
        } else if(choice==2){
            throw invalid_argument("Standard invalid argument exception.");
        } else {
            throw "Unknown error";
        }
    } catch(const invalid_argument& e){
        cout<<"Caught invalid_argument: "<<e.what()<<endl;
    } catch(const MyException& e){
        cout<<"Caught MyException: "<<e.what()<<endl;
    } catch(...){
        cout<<"Caught an unknown exception."<<endl;
    }
}