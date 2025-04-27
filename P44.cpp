#include <iostream>
using namespace std;

int main() {
    int* ptr;
    
    // Allocating memory for an array of 5 integers
    ptr = new int[5];
    for (int i = 0; i < 5; i++) {
        ptr[i] = (i + 1) * 10;
    }
    for (int i = 0; i < 5; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;
    
    // Deallocating the memory
    delete[] ptr;

    return 0;
}
