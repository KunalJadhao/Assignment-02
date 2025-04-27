#include <iostream>
using namespace std;

int main() {
    int a = 5;    //  binary: 0101
    int b = 3;    //  binary: 0011

    // Bitwise AND (&)
    cout << "a & b = " << (a & b) << endl;  // 0101 & 0011 = 0001 = 1

    // Bitwise OR (|) 
    cout << "a | b = " << (a | b) << endl;  // 0101 | 0011 = 0111 = 7

    // Bitwise XOR (^)
    cout << "a ^ b = " << (a ^ b) << endl;  // 0101 ^ 0011 = 0110 = 6

    // Bitwise NOT (~)
    cout << "~a = " << (~a) << endl;        // ~0101 = 1010 = -6 (two's complement)

    // Bitwise Left Shift (<<)
    cout << "a << 1 = " << (a << 1) << endl; // 0101 << 1 = 1010 = 10

    // Bitwise Right Shift (>>)
    cout << "a >> 1 = " << (a >> 1) << endl; // 0101 >> 1 = 0010 = 2

    return 0;
}
