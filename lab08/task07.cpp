// Objective: Define a class 'MathOps' with a member function add(float, float). Use a pointerto-
// member function to call it from main().
#include <iostream>
using namespace std;
class MathOps {
public:
    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    MathOps m1;
    
    float (MathOps::*fp)(float, float) = &MathOps::add;//since function inside class , class name is required to get access to that function 
    
   
    float result = (m1.*fp)(5.5f, 4.5f);
    
    cout << "The sum is: " << result << endl; // Output: The sum is: 10
    return 0;
}