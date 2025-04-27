#include <iostream>
using namespace std;

class Battery {
public:
    int chargeLevel;

    Battery() : chargeLevel(0) {}

    void charge(int amount) {
        if (chargeLevel + amount <= 100) {
            chargeLevel += amount;
            cout << "Charging... Current charge: " << chargeLevel << "%" << endl;
        } else {
            cout << "Battery is already fully charged!" << endl;
        }
    }

    void discharge(int amount) {
        if (chargeLevel - amount >= 0) {
            chargeLevel -= amount;
            cout << "Discharging... Current charge: " << chargeLevel << "%" << endl;
        } else {
            cout << "Battery is empty!" << endl;
        }
    }

    void displayCharge() {
        cout << "Battery charge: " << chargeLevel << "%" << endl;
    }
};

int main() {
    Battery battery;

    battery.charge(50);
    battery.displayCharge();

    battery.discharge(30);
    battery.displayCharge();

    battery.charge(60);
    battery.displayCharge();

    battery.discharge(100);
    battery.displayCharge();

    return 0;
}
