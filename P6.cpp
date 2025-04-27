#include <iostream>
using namespace std;

// Creating a Student class
class Student {
public:
    string name;
    int rollNumber;
    int age;

    // Displaying student record
    void displayRecord() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student student1;

    student1.name = "Kunal Jadhav";
    student1.rollNumber = 12001885;
    student1.age = 23;

    student1.displayRecord();

    return 0;
}
