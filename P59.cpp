#include <iostream>
using namespace std;

int main() {
    char characters[] = {'K', 'U', 'N', 'A', 'L'};  // Array of characters

    for (int i = 0; i < 5; i++) {
        cout << "ASCII value of " << characters[i] << " is " << int(characters[i]) << endl;
    }

    return 0;
}
