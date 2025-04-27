#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 24, 36, 48, 65};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* ptr = arr;
    
    for (int i = 0; i < size; i++) {
        cout << *(ptr + i) << " ";
    }

    cout << endl;

    return 0;
}
