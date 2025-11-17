// ACCESSING MEMBERS OF CLASS

// throught object using dot operator (.)
// ex: object.member

// throught pointer using arrow operator (->)
// ex: pointer->member

// OBJECT INITIALIZATION

//throught object
// ex: ClassName obj;

//throught pointer
// ex: ClassName* ptr = new ClassName();

//DYNAMIC MEMORY ALLOCATION(using new keyword)
// allocates memory at runtime
// ex: ClassName* ptr = new ClassName(); // allocates memory for object of ClassName
// allocated memory must be freed at the end.SO, use delete keyword
// ex: delete ptr; // deallocates memory for single object
// this method gives flexibility and efficient memory usage

//UNION IN C++
// all members share the same memory location
// only one member can hold a value at a time
// memory allocated is equal to the size of the largest member
// union should redefine each time before use to avoid data corruption //ex: union U { int i; float f; char str[20]; };
//union U u; // define union variable
//u.i = 10; // assign integer value
//cout << u.i; // access integer value
//u.f = 220.5; // assign float value
//cout << u.f; // access float value
//cout << u.i; // doesnt access it because float overwrote the memory
// to access back u.i we need to redefine u.i = 15; // redefine and assign new integer value


// FUNCTION POINTERS IN C++

// pointer that points to a function instead of data
// used to call functions dynamically and implement callback functions
// syntax to declare function pointer:
// return_type (*pointer_name)(parameter_types);
// ex: int add(int a, int b) { return a + b; }
// int (*funcPtr)(int, int) = add; // declare function pointer and assign address of add function
// int result = funcPtr(5, 3); // call function using pointer
// cout << "Result: " << result; // Output: Result: 8
// function pointers are useful in scenarios like event handling, callbacks, and implementing function tables

// can be used in arrays to create an array of function pointers for easy access to multiple functions
// ex: int subtract(int a, int b) { return a - b; }
// int (*funcArr[2])(int, int) = {add, subtract}; // array of function pointers
// int res1 = funcArr[0](10, 5); // calls add function 
// int res2 = funcArr[1](10, 5); // calls subtract function
// cout << "Addition: " << res1 << ", Subtraction: " << res2; // Output: Addition: 15, Subtraction: 5

//CALLBACK  FUNCTIONS
//a callback is a function passed as an argument to another function
//it allows to write flexible and reusable code
// Mostly used in event-driven programming and asynchronous operations

// function pointers can also be passed as arguments to other functions for callback mechanisms
// ex: void executeOperation(int (*operation)(int, int), int a, int b) {
//          int result = operation(a, b);
//          cout << "Operation Result: " << result << endl;
//      }
// executeOperation(add, 7, 3); // Output: Operation Result: 10
// executeOperation(subtract, 7, 3); // Output: Operation Result: 4
// this allows for flexible and reusable code


// TEMPLATES IN C++
// blueprints for creating generic and reusable code components
// allow functions and classes to operate with any data type
// reduce code duplication and enhance maintainability
// used to create family of functions or classes
// is called generic programming
// also called parameterized classes and functions

// CLASS TEMPLATES

//a common class that represents similar types of classes
// ex: template <typename T>
// class Box {
//     private:
//     T content;
//     public:
//     void setContent(T c) { content = c; }
//     T getContent() { return content; }
// };
// int main() {
//     Box<int> intBox; // create Box for int
//     intBox.setContent(123);
//     cout << "Integer Box Content: " << intBox.getContent() << endl;
//     Box<string> strBox; // create Box for string
//     strBox.setContent("Hello, Templates!");
//     cout << "String Box Content: " << strBox.getContent() << endl;
//     return 0;
// }

// ex: template <typename T1, typename T2>
// class Pair {
//     private:
//    T1 first;
//    T2 second;
//    public:
//     Pair(T1 f, T2 s) : first(f), second(s) {}
//     T1 getFirst() { return first; }
//     T2 getSecond() { return second; }
// };   
// int main() {
//     Pair<int, string> p(1, "One");
//     cout << "First: " << p.getFirst() << ", Second: " << p.getSecond() << endl;
//     Pair<double, char> p2(3.14, 'A');
//     cout << "First: " << p2.getFirst() << ", Second: " << p2.getSecond() << endl;
//     return 0;

// FUNCTION TEMPLATES

// a common function that represents similar types of functions
// ex: template <typename T>
// T add(T a, T b) {
//     return a + b;
// }
// int main() {
//     cout << "Integer Addition: " << add(5, 10) << endl; // works with int
//     cout << "Double Addition: " << add(5.5, 10.5) << endl; // works with double
//     cout << "String Concatenation: " << add(string("Hello, "), string("World!")) << endl; // works with string
//     return 0;
// }
