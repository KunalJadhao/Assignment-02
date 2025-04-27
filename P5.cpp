#include <iostream>
using namespace std;

// Creating a TemperatureConverter class
class TemperatureConverter {
public:
    double celsius;

    // Converting Celsius to Fahrenheit and printing it
    void convertToFahrenheit() {
        double fahrenheit = (celsius * 9/5) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    }
};

int main() {
    
    TemperatureConverter tempConverter;
    tempConverter.celsius = 25;
    tempConverter.convertToFahrenheit();

    return 0;
}
