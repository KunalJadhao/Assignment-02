#include <iostream>
using namespace std;

// Creating a function 
void decimalToBinary(int num) {
    if (num == 0) {
        cout << "0";
        return;
    }

    // Converting decimal to binary and printing directly
    while (num > 0) {
        cout << num % 2;
        num /= 2;
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    decimalToBinary(num);

    return 0;
}
