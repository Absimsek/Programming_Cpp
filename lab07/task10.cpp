// Objective: Implement a callback mechanism by passing a function pointer to another function
// that prints the ASCII value of a given character.
#include <iostream>
using namespace std;

void printAsciiValue(char c, void (*callback)(char)) {
    callback(c);
}
void asciiCallback(char c) {
    cout << "The ASCII value of '" << c << "' is: " << static_cast<int>(c) << endl;
}
int main() {
    char character = 'A';
    printAsciiValue(character, asciiCallback);
    return 0;
}
