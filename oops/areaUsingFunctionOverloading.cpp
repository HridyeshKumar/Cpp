#include <iostream>
using namespace std;
const float pi = 3.14;
float area(float base, float height) {
    return 0.5 * base * height;
}
float area(float radius) {
    return pi * radius * radius;
}
float area(float length, float breadth) {
    return length * breadth;
}
int main() {
    float base, height, radius, length, breadth;
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << area(base, height) << endl;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area(radius) << endl;
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of the rectangle: " << area(length, breadth) << endl;
    return 0;
}
