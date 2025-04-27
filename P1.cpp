#include <iostream>
using namespace std;

// Robot class
class Robot {
public:
    string name;
    string model;

    // Function to print details
    void printDetails() {
        cout << "Robot Name: " << name << endl;
        cout << "Robot Model: " << model << endl;
    }
};

int main() {
    
    Robot myRobot;
    myRobot.name = "BotX";
    myRobot.model = "RTX-4060";
    myRobot.printDetails();

    return 0;
}
