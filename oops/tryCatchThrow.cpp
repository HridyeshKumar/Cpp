#include <iostream>
using namespace std;

void checkAge(int age) {
    if (age < 18) {
        throw runtime_error("Age must be 18 or older");
    }
    cout << "Access granted" << endl;
}

int main() {
    try {
        checkAge(16);
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
