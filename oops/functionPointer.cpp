#include <iostream>
using namespace std;

void display() {
    cout << "Hello, World!" << endl;
}

int main() {
    void (*funcPtr)() = display;
    funcPtr();
    return 0;
}
