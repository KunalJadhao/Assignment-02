#include <iostream>
using namespace std;

class Drone {
public:
    double speed, batteryLife;
    double computeFlightTime() {
        return batteryLife / speed;  
    }
};

int main() {
    Drone drone;

    cout << "Enter the speed of the drone (in km/h): ";
    cin >> drone.speed;

    cout << "Enter the battery life (in hours): ";
    cin >> drone.batteryLife;

    cout << "Flight time: " << drone.computeFlightTime() << " hours" << endl;

    return 0;
}
