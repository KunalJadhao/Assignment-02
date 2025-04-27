#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int wordCount = 0;
    bool inWord = false;

    for (char c : str) {
        if (c != ' ' && !inWord) {
            wordCount++;
            inWord = true;
        } else if (c == ' ') {
            inWord = false;
        }
    }

    cout << "The number of words in the string is: " << wordCount << endl;

    return 0;
}
