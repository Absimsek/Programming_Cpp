#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void search(string fileName, char targetChar){
ifstream file(fileName + ".txt");

char ch;
int count = 0;

if(file.is_open()){
    while (file.get(ch))
    {
        if (ch==targetChar)
        {
            count++;
        }
        
    }
    file.close();
    cout << "The character '" << targetChar << "' occurs " << count << " times in the file." << endl;
}
else{
    cout << "Unable to open file : " << fileName<< endl;
}
}

int main(){
    //task7
    //write a function that accepts a filename and a string as parameters. 
    //the function should open the specified file and research for all occurences of the given string,
    //then print the number of occurences found in the file.
    string fileName;
    char ch;
    cout << "Enter the filename : ";
    cin >> fileName;
    while (true)
    {
        cout << "Enter the character to search for: ";
        cin >> ch;
        search(fileName, ch);
        int brk;
        cout << "Enter 0 to stop or any other number to continue: ";
        cin >> brk;
        if (brk==0)
        {
            break;
        }
        
    }
    
    return 0;


}