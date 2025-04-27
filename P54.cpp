#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for half of the diamond: ";
    cin >> n;

    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";  // Print spaces
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "%";  // Print the '%' symbol
        }
        cout << endl;
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            cout << " ";  // Print spaces
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "%";  // Print the '%' symbol
        }
        cout << endl;
    }

    return 0;
}
