#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    Student(int m) : marks(m) {}

    bool operator==(const Student& other) {
        return marks == other.marks;
    }
};

int main() {
    Student student1(85), student2(90), student3(85);

    cout << (student1 == student3 ? "Equal" : "Not Equal") << endl;
    cout << (student1 == student2 ? "Equal" : "Not Equal") << endl;

    return 0;
}
