#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if ((a > 0 && b > 0 && c > 0) || (a == 0 || b == 0 || c == 0)) {
        cout << "Valid input!" << endl;
    } else {
        cout << "Invalid input! All numbers must be positive or at least one must be zero." << endl;
    }

    return 0;
}
