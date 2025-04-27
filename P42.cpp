#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 24, 36, 48, 65};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* ptr = arr;
    int max = *ptr;

    for (int i = 1; i < size; i++) {
        ptr++;
        if (*ptr > max) {
            max = *ptr;
        }
    }

    cout << "Maximum element: " << max << endl;

    return 0;
}
