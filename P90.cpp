#include <iostream>
using namespace std;

int main() {
    int signal;

    cout << "Enter the traffic light signal: ";
    cin >> signal;

    switch (signal) {
        case 1:
            cout << "Red light: Stop!" << endl;
            break;
        case 2:
            cout << "Yellow light: Get ready to move!" << endl;
            break;
        case 3:
            cout << "Green light: Go!" << endl;
            break;
        default:
            cout << "Invalid signal! Please enter a valid number (1, 2, or 3)." << endl;
    }

    return 0;
}
