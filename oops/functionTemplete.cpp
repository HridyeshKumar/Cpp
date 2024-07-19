#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(3, 4) << endl;         // Output: 7
    cout << add(3.5, 4.5) << endl;     // Output: 8.0
    return 0;
}
