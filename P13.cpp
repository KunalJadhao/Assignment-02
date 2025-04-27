#include <iostream>
using namespace std;

// Creating a function 
int reverseInteger(int num) {
    int reversed = 0;

    // Reversing the integer 
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
      return reversed;
}

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    
    int result = reverseInteger(num);
    cout << "Reversed number: " << result << endl;

    return 0;
}
