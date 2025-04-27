#include <iostream>
using namespace std;

class Motor {
public:
    double rpm, time;

    double computeRotationSpeed() {
        return rpm * time;
    }
};

int main() {
    Motor motor;
    motor.rpm = 100; 
    motor.time = 2;   

    cout << "Rotation Speed: " << motor.computeRotationSpeed() << " revolutions" << endl;

    return 0;
}
