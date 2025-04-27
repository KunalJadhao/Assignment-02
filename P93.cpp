#include <iostream>
using namespace std;

class LineFollowingRobot {
public:
    void followLine(int leftSensor, int rightSensor) {
        if (leftSensor == 1 && rightSensor == 1) {
            cout << "Moving forward: Both sensors on the line." << endl;
        } else if (leftSensor == 1 && rightSensor == 0) {
            cout << "Turning left: Left sensor on the line." << endl;
        } else if (leftSensor == 0 && rightSensor == 1) {
            cout << "Turning right: Right sensor on the line." << endl;
        } else {
            cout << "Stopping: No sensors on the line." << endl;
        }
    }
};

int main() {
    LineFollowingRobot robot;
    int leftSensor, rightSensor;
    cout << "Enter left sensor state (1 for line detected, 0 for no line): ";
    cin >> leftSensor;
    cout << "Enter right sensor state (1 for line detected, 0 for no line): ";
    cin >> rightSensor;

    robot.followLine(leftSensor, rightSensor);

    return 0;
}
