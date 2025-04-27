#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr1 = &num;    // Pointer to int
    int** ptr2 = &ptr1;   // Pointer to pointer to int

    cout << "Value of num: " << num << endl;
    cout << "Value using ptr1: " << *ptr1 << endl;
    cout << "Value using ptr2: " << **ptr2 << endl;

    return 0;
}
