#include <iostream>
#include <algorithm>  
using namespace std;

// Creating a function 
void sortArray(int arr[], int size) {
    // Sorting the array using the built-in sort function
    sort(arr, arr + size);
}

int main() {
    int arr[] = {5, 2, 10, 1, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
