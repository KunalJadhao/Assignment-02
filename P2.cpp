#include <iostream>
using namespace std;

// Car class
class Car {
public:
    double distance;
    double fuel;

    // Function to calculate and print mileage
    void calculateMileage() {
        if (fuel != 0) {
            double mileage = distance / fuel;
            cout << "Mileage: " << mileage << " km/l" << endl;
        } else {
            cout << "Fuel cannot be zero!" << endl;
        }
    }
};

int main() {
    
    Car myCar;
    myCar.distance = 1000; // in kilometers
    myCar.fuel = 50;      // in liters
    myCar.calculateMileage();

    return 0;
}
