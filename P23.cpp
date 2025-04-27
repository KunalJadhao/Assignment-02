#include <iostream>
using namespace std;

// Creating a function 
void calculateSumAndAverage(int arr[], int size) {
    int sum = 0;

    // Adding each element to the sum
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Calculating the average
    double average = static_cast<double>(sum) / size;

    // Displaying the sum and average
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
}

int main() {
    int arr[] = {20,30,40,50,60};
    int size = sizeof(arr) / sizeof(arr[0]);

    calculateSumAndAverage(arr, size);

    return 0;
}
