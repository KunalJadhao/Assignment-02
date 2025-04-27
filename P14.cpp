#include <iostream>
using namespace std;

// Creating a function 
int largerOfTwo(int num1, int num2) {
    // Returning num1 if it is greater, else returning num2
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int result = largerOfTwo(num1, num2);
    cout << "The larger number is: " << result << endl;

    return 0;
}
