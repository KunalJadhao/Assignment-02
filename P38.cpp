#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    int i = 0;
    while (i < str1.length() && i < str2.length() && str1[i] == str2[i]) {
        i++;
    }

    if (i == str1.length() && i == str2.length()) {
        cout << "The strings are equal." << endl;
    } else if (str1[i] < str2[i]) {
        cout << "The first string is smaller." << endl;
    } else {
        cout << "The first string is greater." << endl;
    }

    return 0;
}
