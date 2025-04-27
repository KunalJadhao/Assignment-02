#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    
    if (str1.length() != str2.length()) {
        cout << "Not anagrams";
    } else {
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        
        if (str1 == str2) {
            cout << "Anagrams";
        } else {
            cout << "Not anagrams";
        }
    }
    return 0;
}
