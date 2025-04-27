#include <iostream>
using namespace std;

int main() {
    int experience;
    double salary;

    cout << "Enter years of experience: ";
    cin >> experience;

    if (experience < 2) {
        salary = 30000; // Salary for less than 2 years of experience
    }
    else if (experience >= 2 && experience < 5) {
        salary = 50000; // Salary for 2 to 5 years of experience
    }
    else if (experience >= 5 && experience < 10) {
        salary = 70000; // Salary for 5 to 10 years of experience
    }
    else {
        salary = 90000; // Salary for 10 or more years of experience
    }

    cout << "The calculated salary based on experience is: " << salary << endl;

    return 0;
}
