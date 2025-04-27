#include <iostream>
using namespace std;

int main() {
    int* ptr;
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    // Dynamically allocating memory
    ptr = new int[size];

    for (int i = 0; i < size; i++) {
        ptr[i] = (i + 1) * 10;
    }
    cout << "The values in the dynamically allocated array are: ";
    for (int i = 0; i < size; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;

    //Deallocate
    delete[] ptr;

    return 0;
}
