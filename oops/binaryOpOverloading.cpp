#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;
public:
    Complex() : real(0), imag(0) {}
    Complex(float r, float i) : real(r), imag(i) {}

    // Overloading the binary + operator
    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2.3, 4.5), c2(1.6, 2.7), c3;
    c3 = c1 + c2;
    c3.display(); // Output: 3.9 + 7.2i
    return 0;
}
