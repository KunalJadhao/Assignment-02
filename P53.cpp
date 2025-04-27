#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of terms: ";
    cin >> N;

    int first = 0, second = 1, next;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= N; i++) {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }

    cout << endl;

    return 0;
}
