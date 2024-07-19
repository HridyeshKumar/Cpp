#include <iostream>
using namespace std;

int main() {
    int *ptr = new int; // Allocate memory
    *ptr = 42;
    cout << "Value: " << *ptr << endl;
    delete ptr; // Free memory
    return 0;
}
