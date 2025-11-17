// file operations

//OPEN A FILE
// #include <fstream> // file stream library
// when opening a file, if the file is not exist it will be created
// ofstream ofs("filename.txt"); // opens a file for writing // creates the file if it does not exist
// ifstream ifs("filename.txt"); // opens a file for reading // file must exist
// fstream fs("filename.txt"); // opens a file for both reading and writing
// when program ends closes the file.

//IOS MODES
// ios::in : open file for reading
// ios::out : open file for writing
// ios::app : append data to the end of the file
// ios::ate : move to the end of the file when opened
// ios::trunc : delete existing content when opening file for writing
// ios:nocreate : do not create file if it does not exist
// ios::noreplace : do not replace existing file

//WRITING TO A FILE
// ofstream ofs("filename.txt"); // open file for writing // creates the file if it does not exist
// ofs << "Hello, World!" << endl; // write to file
// ofs << variable << endl; // write variable to file
// ofstream ofs("filename.txt", ios::app); // open file in append mode
// ofs << "Appending this line." << endl; // append to file

//READING FROM A FILE
// ifstream ifs("filename.txt"); // open file for reading // file must exist
//ifs  >> variable; // read from file into variable
// string line;
// getline(ifs, line); // read a line from file into line variable
// while (getline(ifs, line)) { // read file line by line // while loop continues until end of file
//     cout << line << endl; // prints the line variable each turn of while loop
// }



//PROCEDURE ORIENTED PROGRAMMING (POP)

// STEP-BY-STEP recipe of a program.
//focuses on HOW TO DO

// 1. read input
// 2. process data
// 3. produce output


//DISADVANTAGES OF POP
// 1. code reusability is low 
// 2. difficult to maintain for large programs (comlex systems is hard to manage)
// 3. data is exposed to entire program (global data can be modified by any function)
// 4. NO ENCAPSULATION (data and functions are separate)

//OBJECT ORIENTED PROGRAMMING (OOP)

// focuses on WHAT TO DO
// structures code into classes and objects
// 1. encapsulation (data and methods are together)
// 2. make code modular,reusable, and scalable
// 3. data hiding (restrict access to internal data)
// 4. easier to maintain for large programs (complex systems are easier to manage)
// 5. follows the DRY principle (dont repeat yourself) (reusability)

// ACCESS SPECIFIERS IN OOP
// 1. public : accessible from anywhere
// 2. private : accessible only within the class
// 3. protected : accessible within the class and its child classes


//POP VS OOP

// POP focuses on functions and procedures to operate on data
// OOP focuses on objects that encapsulate data and behavior

// POP is suitable for small programs with simple logic
// OOP is suitable for large programs with complex logic

// POP can lead to code duplication and maintenance issues
// OOP promotes code reusability and easier maintenance through encapsulation and modularity

// POP does not provide data hiding and encapsulation
// OOP provides data hiding and encapsulation through access specifiers

