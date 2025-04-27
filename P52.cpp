#include <iostream>
using namespace std;

int main() {
    bool isPrime;

    for (int num = 2; num <= 100; num++) {
        isPrime = true;

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    cout << endl;

    return 0;
}
