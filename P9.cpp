#include <iostream>
using namespace std;

// Creating a Rectangle class
class Rectangle {
public:
    double length;
    double width;

    // Calculating area and printing it
    void calculateArea() {
        double area = length * width;
        cout << "Area = " << area << endl;
    }

    // Calculating perimeter and printing it
    void calculatePerimeter() {
        double perimeter = 2 * (length + width);
        cout << "Perimeter = " << perimeter << endl;
    }
};

int main() {
    Rectangle rect;

    rect.length = 23;
    rect.width = 10;

    rect.calculateArea();
    rect.calculatePerimeter();

    return 0;
}
