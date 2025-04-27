#include <iostream>
using namespace std;

// Creating a function Kunal to calculate factorial using recursion
int Kunal(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Returning 1 when n is 0 or 1
    } else {
        return n * Kunal(n - 1);  // Calling Kunal recursively with n-1
    }
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int result = Kunal(number);

    cout << "Factorial of " << number << " is " << result << endl;

    return 0;
}
