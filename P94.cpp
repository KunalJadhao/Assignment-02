#include <iostream>
using namespace std;

class Sensor {
public:
    double temperature; 
    void setTemperature(double temp) {
        temperature = temp;
    }
    void checkTemperature() {
        if (temperature < 0) {
            cout << "Temperature is below freezing point." << endl;
        } else if (temperature >= 0 && temperature <= 30) {
            cout << "Temperature is within normal range." << endl;
        } else {
            cout << "Temperature is above normal range." << endl;
        }
    }
};

int main() {
    Sensor sensor;
    double temp;

    cout << "Enter the temperature (in Celsius): ";
    cin >> temp;

    sensor.setTemperature(temp);
    sensor.checkTemperature();

    return 0;
}
