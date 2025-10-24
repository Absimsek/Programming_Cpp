#include <iostream>
using namespace std;

class ArrayOperations {
    public:
int arr [5];
int sum(){
    int total = 0;
    for(int i = 0; i < 5; i++){
        total += arr[i];
    }
    return total;
}
};

int main(){
    ArrayOperations a1;
    a1.arr[0] = 10;
    a1.arr[1] = 20; 
    a1.arr[2] = 30;
    a1.arr[3] = 40;
    a1.arr[4] = 50;
    cout << "Sum: " << a1.sum() << endl;
    return 0;
}