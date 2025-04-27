#include <iostream>
using namespace std;

void printArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 24, 36, 48, 65};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);

    return 0;
}
