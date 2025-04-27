#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    for (int i = 0; i < 5; i++) {
        cout << "Enter name of student " << i+1 << ": ";
        cin >> name;  // Input student name
        cout << "Enter age of student " << i+1 << ": ";
        cin >> age;   // Input student age
        cout << "Student " << i+1 << ": " << name << ", Age: " << age << endl;
    }

    return 0;
}
