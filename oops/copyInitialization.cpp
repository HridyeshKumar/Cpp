#include <iostream>
using namespace std;

class Box {
private:
    int length;
public:
    Box() : length(0) {}
    Box(int l) : length(l) {}
    Box(const Box &b) {
        length = b.length;
    }
    int getLength() {
        return length;
    }
};

int main() {
    Box b1(10);
    Box b2 = b1; // Copy initialization
    cout << "Length of b2: " << b2.getLength() << endl;
    return 0;
}
