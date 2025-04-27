#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1,10,7,3};  
    int arr2[] = {2,5,4,2};  
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    
    int merged[size1 + size2];
    int in = 0;

    
    for (int i = 0; i < size1; i++) {
        merged[in++] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        merged[in++] = arr2[i];
    }
    cout << "Merged array: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
