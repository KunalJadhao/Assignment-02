#include <iostream>
using namespace std;

// Creating a function 
bool isPrime(int num) {
    // Returning false if the number is less than or equal to 1
    if (num <= 1) {
        return false;
    }

    // Checking divisibility 
    for (int i = 2; i * i <= num; i++) {
        
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
