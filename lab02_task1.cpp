

#include <iostream>
using namespace std;

void printSquare(int num) {
    // Task 4:
    // Write a void function that takes one integer parameter and prints its square.
    cout<<"\ntask 4 output: ";
    cout << "The square of " << num << " is " << num * num << endl;
}

void callByValue(int num) {
    // Task 5:
    // Write a program that demonstrates call by value, showing that the original variable does not
    // change.
    cout<<"\ntask 5 output: ";
    
    num =num+50; 
    cout << " modified number inside function: " << num << endl;
}

void callByReference(int &num) {
    // Task 6:
    // Write a program that demonstrates call by reference, showing that the original variable
    // changes.
    cout<<"\ntask 6 output: ";
    num = num + 50; 
    cout << " modified number inside function: " << num << endl;
}

int add(int a, int b) {
    // Task 7:
    // Write two overloaded functions named add() — one that adds two integers and another that
    // adds two doubles.
    cout<<"\ntask 7 output: ";
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

void display() {
    // Task 8:
    // Write two overloaded functions named display() — one with no parameters and one with a
    // string parameter.
    cout<<"\ntask 8 output: ";
    cout << "this is no parameter display function" << endl;
}

void display(string str) {
    cout<<"this is string parameter display function: ";
    cout <<"string entered is: "<< str << endl;
}

// void ovrd() {
    //     cout << "This is the original function." << endl;
    // } //original function declaration override is causing an error so I made it comment. 
    
    void ovrd() {
        // Task 9:
        // Write a simple program that overrides a function by redefining it with the same name and
        // parameters in a new scope.
        
        cout<<"\ntask 9 output: ";
        cout << "This is the overrided function." << endl;
    }
    
    int max(int a, int b) {
        // Task 10:
        // Write a program that defines multiple overloaded max() functions to find the larger value
        // among integers and floats.
        if (a>b) {
            return a;
        } else {
            return b;
        }  
    }
    
    float max(float a, float b) {
        if (a>b) {
            return a;
        } else {
            return b;
        }  
    }
    
    float max(int a, float b) {//to compare two functions returns.
        if (a>b) {
            return a;
        } else {
            return b;
        }  
    }
    
    
    int multiply(int a, int b) {
        // Task 11:
        // Write a program that uses the same function name for different parameter types to
        // demonstrate function overloading.
        return a * b;
    }
    
    double multiply(double a, double b, double c) {
        return a * b * c;
    }
    
    
    int main() {
        cout<<"Enter an integer: ";
        int number;
        cin>>number;
        printSquare(number);
        
        callByValue(number);
        cout << " original number in main function: " << number << endl;
        
        int *p=&number;
        callByReference(*p);
        cout << " modified number in main function: " << number << endl;
    
    cout << add(5, 10) << endl;        
    cout << add(5.5, 10.5) << endl;    
    
    display();
    display("Hello World");
    
    ovrd();
    
    cout<<"\ntask 10 output: ";
    cout << "int bigger value among 10 - 20 :"<<max(10, 20) << endl;
    cout << "float bigger value among 10.5 - 20.5 :"<<max(10.5f, 20.5f) << endl;
    cout<< "general bigger value among all given values 10 - 10.5 - 20 - 20.5 :"<<max(max(10,20), max(10.5f, 20.5f))<<endl;
    
    cout<<"\ntask 11 output: ";
    cout <<"original int multiply :"<< multiply(5, 10) << endl;
    cout <<"overloaded double multiply :"<< multiply(5.5, 10.5, 15.5) << endl;
    return 0;
}