#include <iostream>
using namespace std;

class Box {
public:
    static void display() {
        cout << "Static display function" << endl;
    }
};

int main() {
    Box::display();
    return 0;
}
