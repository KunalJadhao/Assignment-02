#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 3;

    // Find the maximum using ternary operator
    int max = (a > b && a > c) ? a : (b > c ? b : c);

    cout << "The maximum is: " << max << endl;

    return 0;
}
