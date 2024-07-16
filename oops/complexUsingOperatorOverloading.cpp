#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    // Overload + operator for addition
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Overload - operator for subtraction
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    // Overload * operator for multiplication
    Complex operator*(const Complex& other) const {
        double newReal = real * other.real - imaginary * other.imaginary;
        double newImaginary = real * other.imaginary + imaginary * other.real;
        return Complex(newReal, newImaginary);
    }

    // Overload / operator for division
    Complex operator/(const Complex& other) const {
        double denominator = other.real * other.real + other.imaginary * other.imaginary;
        double newReal = (real * other.real + imaginary * other.imaginary) / denominator;
        double newImaginary = (imaginary * other.real - real * other.imaginary) / denominator;
        return Complex(newReal, newImaginary);
    }

    // Display complex number
    void display() const {
        cout << "(" << real << ") + (" << imaginary << ")i";
    }
};

int main() {
    Complex A(2.5, -2.2);
    Complex B(1.0, 1.0);

    Complex sum = A + B;
    Complex diff = A - B;
    Complex product = A * B;
    Complex quotient = A / B;

    cout << "A = ";
    A.display();
    cout << endl;

    cout << "B = ";
    B.display();
    cout << endl;

    cout << "A + B = ";
    sum.display();
    cout << endl;

    cout << "A - B = ";
    diff.display();
    cout << endl;

    cout << "A * B = ";
    product.display();
    cout << endl;

    cout << "A / B = ";
    quotient.display();
    cout << endl;

    return 0;
}
