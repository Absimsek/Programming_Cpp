// Objective: Wrap a normal function and a lambda expression using std::function<int(int,int)>.
// Demonstrate addition and multiplication operations.

#include <iostream>
#include <functional>
int add(int a, int b) {
    return a + b;
}
int main() {
    std::function<int(int, int)> func;

    
    func = add;
    std::cout << "Addition (5 + 3): " << func(5, 3) << std::endl;

  
    func = [](int a, int b) { return a * b; };
    std::cout << "Multiplication (5 * 3): " << func(5, 3) << std::endl;

    return 0;
}