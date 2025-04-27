#include <iostream>
using namespace std;

class MyClass {
public:
    int number;
    string text;

    void display() {
        cout << "Number: " << number << ", Text: " << text << endl;
    }
};

int main() {
    MyClass obj;
    MyClass* ptr = &obj;

    (*ptr).number = 100;
    (*ptr).text = "Hello, Main!";

    (*ptr).display();

    return 0;
}
