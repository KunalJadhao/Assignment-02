#include <iostream>
using namespace std;

class RobotArm {
public:
    double weight, motorPower;
    double calculateGripStrength() {
        return weight * motorPower * 0.1;
    }
};

int main() {
    RobotArm arm;

    cout << "Enter weight the arm can handle (kg): ";
    cin >> arm.weight;
    
    cout << "Enter motor power (hp): ";
    cin >> arm.motorPower;

    cout << "Grip Strength: " << arm.calculateGripStrength() << " Newtons" << endl;

    return 0;
}
