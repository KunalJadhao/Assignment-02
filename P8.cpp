#include <iostream>
using namespace std;

// Creating a ComplexNumber class
class ComplexNumber {
public:
    double real;
    double imaginary;

    // Adding two complex numbers and printing the result
    void add(ComplexNumber c1, ComplexNumber c2) {
        real = c1.real + c2.real;
        imaginary = c1.imaginary + c2.imaginary;
        cout << "Sum = " << real << " + " << imaginary << "i" << endl;
    }

    // Subtracting two complex numbers and printing the result
    void subtract(ComplexNumber c1, ComplexNumber c2) {
        real = c1.real - c2.real;
        imaginary = c1.imaginary - c2.imaginary;
        cout << "Difference = " << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    ComplexNumber num1, num2, result;

    num1.real = 7.6;
    num1.imaginary = 4.5;

    num2.real = 2.0;
    num2.imaginary = 1.2;

    result.add(num1, num2);
    result.subtract(num1, num2);

    return 0;
}
