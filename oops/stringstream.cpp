#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss;
    ss << "123 456";

    int a, b;
    ss >> a >> b;

    cout << "a: " << a << ", b: " << b << endl;
    return 0;
}
