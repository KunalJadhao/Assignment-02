#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    int* ptr1 = &a;
    int* ptr2 = &b;

    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;

    cout << "After swapping:" << endl;
    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;

    return 0;
}
