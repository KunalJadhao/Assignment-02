#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Input size of array

    int arr[n];  // Declare array

    for (int i = 0; i < n; i++) cin >> arr[i];  

    for (int i = n - 1; i >= 0; i--) cout << arr[i] << " ";  

    return 0;
}
