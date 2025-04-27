#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    cin >> radius;
    cout << "Area: " << M_PI * radius * radius << endl;
    cout << "Circumference: " << 2 * M_PI * radius << endl;
    return 0;
}
