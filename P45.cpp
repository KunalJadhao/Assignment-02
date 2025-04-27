#include <iostream>
using namespace std;

int main() {
    char str[] = "Hello India!";
    char* start = str;
    char* end = str;

    while (*end != '\0') {
        end++;
    }
    end--;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}
