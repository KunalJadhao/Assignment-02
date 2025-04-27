#include <iostream>
using namespace std;

int main() {
    int arr[] = {65,48,36,24,12};  
    int size = sizeof(arr) / sizeof(arr[0]);

    
    for (int i = 1; i < size; i++) {
        int key = arr[i];  
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
