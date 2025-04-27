#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    a = b;  
    cout << "After assignment: a = " << a << ", b = " << b << endl;

    
    if (a == b) {  
        cout << "a is equal to b." << endl;
    } else {
        cout << "a is not equal to b." << endl;
    }

    return 0;
}
