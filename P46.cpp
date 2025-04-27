#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 24, 36, 48, 65};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* ptr = arr;
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);
    }

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}
