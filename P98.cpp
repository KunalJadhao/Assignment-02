#include <iostream>
using namespace std;

class ServoMotor {
public:
    int angle;

    void setAngle(int a) {
        if (a >= 0 && a <= 180) {
            angle = a;
            cout << "Servo motor angle set to: " << angle << " degrees" << endl;
        } else {
            cout << "Invalid angle. Please enter an angle between 0 and 180 degrees." << endl;
        }
    }

    void sweep() {
        for (int i = 0; i <= 180; i += 10) {
            setAngle(i);
        }
        for (int i = 180; i >= 0; i -= 10) {
            setAngle(i);
        }
    }
};

int main() {
    ServoMotor motor;

    int inputAngle;
    cout << "Enter the angle to set the servo motor: ";
    cin >> inputAngle;

    motor.setAngle(inputAngle);

    cout << "\nStarting servo motor sweep (from 0 to 180 and back)..." << endl;
    motor.sweep();

    return 0;
}
