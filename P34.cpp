#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int frequency[300] = {0}; 

    for (char c : str) {
        if (c != ' ') {  
            frequency[c]++;
        }
    }

    cout << "Character frequencies: " << endl;
    for (int i = 0; i < 300; i++) {
        if (frequency[i] > 0) {
            cout << char(i) << ": " << frequency[i] << endl;
        }
    }

    return 0;
}
