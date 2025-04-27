#include <iostream>
using namespace std;

// Creating a function 
void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    swapNumbers(num1, num2);
    cout << "After swapping: " << num1 << " " << num2 << endl;

    return 0;
}
