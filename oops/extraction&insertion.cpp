#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    friend ostream& operator<<(ostream& os, const Point& p);
    friend istream& operator>>(istream& is, Point& p);
};

ostream& operator<<(ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}

istream& operator>>(istream& is, Point& p) {
    is >> p.x >> p.y;
    return is;
}

int main() {
    Point p1;
    cout << "Enter coordinates (x y): ";
    cin >> p1;
    cout << "Point: " << p1 << endl;
    return 0;
}
