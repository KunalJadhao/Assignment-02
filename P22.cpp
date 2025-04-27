#include <iostream>
using namespace std;

// Creating a function to reverse the array
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    // Swapping elements while reversing the array
    while (start < end) {
        // Swapping elements at positions start and end
        int Temperory = arr[start];
        arr[start] = arr[end];
        arr[end] = Temperory;

        // Incrementing start and decrementing end
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);

    // Printing the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
