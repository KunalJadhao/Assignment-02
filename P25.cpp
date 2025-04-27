#include <iostream>
using namespace std;

int main() {
    int arr[] = {11,12,25,36,34,76,35,78}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the element to search: ";
    cin >> target;

    
    int left = 0, right = size - 1;
    int index = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            index = mid;
            break;  
        }
        else if (arr[mid] < target) {
            left = mid + 1;  
        }
        else {
            right = mid - 1;  
        }
    }

    
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}
