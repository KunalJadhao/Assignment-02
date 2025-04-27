#include <iostream>
using namespace std;

class RobotController {
public:
    bool isInitialized;

    RobotController() : isInitialized(false) {}

    void initialize() {
        if (!isInitialized) {
            isInitialized = true;
            cout << "Robot is now initialized and ready for operation!" << endl;
        } else {
            cout << "Robot is already initialized." << endl;
        }
    }

    void shutdown() {
        if (isInitialized) {
            isInitialized = false;
            cout << "Robot is shutting down..." << endl;
        } else {
            cout << "Robot is already shut down." << endl;
        }
    }

    void status() {
        if (isInitialized) {
            cout << "Robot is operational." << endl;
        } else {
            cout << "Robot is not initialized." << endl;
        }
    }
};

int main() {
    RobotController robot;
    robot.status();   
    robot.initialize();  
    robot.status();   
    robot.shutdown();    
    robot.status();   

    return 0;
}
