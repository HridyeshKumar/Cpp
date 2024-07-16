#include <iostream>
using namespace std;

class ObjectCounter {
private:
    static int count; // Static variable to keep track of object count

public:
    ObjectCounter() {
        count++; // Increment count when an object is created
        cout << "Object created. Total objects: " << count << endl;
    }

    ~ObjectCounter() {
        count--; // Decrement count when an object is destroyed
        cout << "Object destroyed. Total objects: " << count << endl;
    }
};

int ObjectCounter::count = 0; // Initialize static count

int main() {
    ObjectCounter obj1; // Creates an object
    ObjectCounter obj2; // Creates another object

    // Objects will be automatically destroyed when they go out of scope
    return 0;
}
