#include <iostream>
using namespace std;

class Robot {
public:
    void detectObstacle(bool isObstacle) {
        if (isObstacle) {
            cout << "Obstacle detected! Stop the robot." << endl;
        } else {
            cout << "No obstacle. Keep moving." << endl;
        }
    }
};

int main() {
    Robot robot;
    bool isObstacle;

    cout << "Enter 1 if obstacle is detected, 0 if no obstacle: ";
    cin >> isObstacle;

    robot.detectObstacle(isObstacle);

    return 0;
}
