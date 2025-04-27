#include <iostream>
#include <string>
using namespace std;

// Creating a function 
int countVowels(const string &str) {
    int count = 0;

    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }

    return count;
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Number of vowels: " << countVowels(str) << endl;

    return 0;
}
