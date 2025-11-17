// struct is heterogeneous
// struct can contain different data types

// array is homogeneous due to containing 1 data type
// in database structures called as records

//individual elements of struct are called members(fields)

//complex data structures can be defined by array of struct
//struct{ }; is used to define struct

// strcpy copies content of a string to another string
// pointers contain adress of variable

//the thing that makes C and C++ fast is pointers.
// direct reference : is using variables and names
// indirect reference : is using pointers or other references

// initialize pointer whether 0 or nullptr

//& returns the address of variable

//pass by value: value inside function is not returns to main
//pass by reference using pointers : function takes pointer paramater and uses it inside  this way variable changes return to main
//pass by reference using references : function takes reference parameter and uses address of variable directly this way variable changes return to main

// POINTER VS REFERENCE

// pointer can be initialized to null
// reference cannot be  initialized to null

// pointer can be reassigned to another address
// reference cannot be reassigned to another address

// pointer has its own memory address
// reference shares the memory address of the variable it references

// pointers can be used for multiple levels of indirection
// references cannot be used for multiple levels of indirection

//SMART POINTERS

// smart pointers manage memory automatically
// unique_ptr : unique ownership -cannot be copied - can be used by only 1 pointer at a time -auto delete when out of scope
// shared_ptr : multiple ownership -can be copied - reference counting - auto delete when kast shared_ptr out of scope
// weak_ptr : non-owning reference - used with shared_ptr to avoid circular references - does not affect reference count
// #include <memory> is required for smart pointers

//FUNCTION PROTOTYPES
// function prototype is declaration of function before main
// function prototype contains return type, name, and parameters
// function prototype allows calling function before its definition
// ex: int add(int a, int b); is prototype for add function

//CALL BY VALUE VS CALL BY REFERENCE
// call by value : function gets a copy of the argument - changes do not affect original variable
// call by reference : function gets a reference to the argument - changes affect original variable

//OVERLOADING
// function overloading : same function name with different parameters

//OVERRIDING
// function overriding : child class redefines base class function
// works only with inheritance (between different classes)
// just the body changes not the prototype

