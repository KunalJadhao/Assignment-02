#include <iostream>
using namespace std;

int main() {
    int rows = 5;  
    int numbers[] = {7, 29, 2};  

    int count = 0;  

    for (int i = 1; i <= rows; i++) {
        for (int j = i; j < rows; j++) {
            cout << " ";  
        }

        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << numbers[count] << " ";  
            count = (count + 1) % 3;  
        }

        cout << endl;
    }

    return 0;
}
