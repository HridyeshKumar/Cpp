#include <iostream>
using namespace std;

class Counter {
private:
    int count;
public:
    Counter() : count(0) {}

    // Overloading the unary ++ operator
    Counter operator++() {
        ++count;
        return *this;
    }

    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1;
    ++c1;
    c1.display(); // Output: Count: 1
    return 0;
}
