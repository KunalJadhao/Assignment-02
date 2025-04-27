#include <iostream>
using namespace std;

// Creating a Circle class
class Circle {
public:
    double radius;

    // Calculating and printing area
    void calculateArea() {
        double area = 3.14159 * radius * radius;
        cout << "Area: " << area << endl;
    }

    // Calculating and printing circumference
    void calculateCircumference() {
        double circumference = 2 * 3.14159 * radius;
        cout << "Circumference: " << circumference << endl;
    }
};

int main() {
    
    Circle myCircle;
    myCircle.radius = 7.0;
    myCircle.calculateArea();
    myCircle.calculateCircumference();

    return 0;
}
