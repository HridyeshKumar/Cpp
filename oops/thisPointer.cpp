#include <iostream>
using namespace std;

class Box {
private:
    int length;
public:
    Box(int l) : length(l) {}
    void display() {
        cout << "Length: " << this->length << endl;
    }
};

int main() {
    Box b(10);
    b.display();
    return 0;
}
