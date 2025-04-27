#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    // Constructor to initialize complex number
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Overloading + operator
    Complex operator+(const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;  
        temp.imag = imag + obj.imag; 
        return temp;
    }

    // Function to display the complex number
    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex num1(5, 3), num2(2, 4);

    
    Complex sum = num1 + num2;

    cout << "Sum of the complex numbers: ";
    sum.display();

    return 0;
}
