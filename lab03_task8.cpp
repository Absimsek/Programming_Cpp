#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    
    //task8
    //Develop a program that reads numerical data from a file named "numbers.txt"
    //(assuming one number per line), calculates the average of these numbers, and writes the final
    //average to a new file named "average.txt".
    ifstream numbersFile("lab03_numbers.txt");
    ofstream averageFile("lab03_average.txt");
    int number;
    int sum = 0;
    int count = 0;
    if(numbersFile.is_open()){
        while (numbersFile >> number)
        {
            sum += number;
            count++;
        }
        numbersFile.close();
        if(count > 0){
            double average = (double)sum / count;
            averageFile  << average << endl;
            cout << "Sum: " << sum << ", Count: " << count << endl;
            cout << "Average: " << average << endl;
            cout << "Average calculated and written to average.txt" << endl;
        }
        else{
            cout << "No numbers found in the file." << endl;
        }
        averageFile.close();
    }
    else{
        cout << "Unable to open file: lab03_numbers.txt" << endl;
    }
    return 0;
}