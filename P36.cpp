#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int maxLength = 0, currentLength = 0;
    string longestWord = "", currentWord = "";

    for (char c : str) {
        if (c != ' ') {
            currentWord += c;
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                longestWord = currentWord;
                maxLength = currentLength;
            }
            currentWord = "";
            currentLength = 0;
        }
    }

    if (currentLength > maxLength) {
        longestWord = currentWord;
    }

    cout << "The longest word is: " << longestWord << endl;

    return 0;
}
