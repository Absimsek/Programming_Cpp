#include <iostream>
using namespace std;

class Temperature{
    public:
    double celsius;
    double toFahrenheit(){
        return (celsius * 9.0 / 5.0) + 32.0;
    }
    double toKelvin(){
        return celsius + 273.15;
    }
};

int main(){
    Temperature temp;
    temp.celsius = 25.0; 
    cout << "Temperature in Celsius: " << temp.celsius << " °C" << endl;
    cout << "Temperature in Fahrenheit: " << temp.toFahrenheit() << " °F" << endl;
    cout << "Temperature in Kelvin: " << temp.toKelvin() << " K" << endl;
    return 0;
}