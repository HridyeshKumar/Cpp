#include <iostream>
using namespace std;

// Base class
class Parent {
public:
    int id_p;
    void printID_p() {
        cout << "Base ID: " << id_p << endl;
    }
};

// Derived class publicly inheriting from Base
class Child : public Parent {
public:
    int id_c;
    void printID_c() {
        cout << "Child ID: " << id_c << endl;
    }
};

// Derived class privately inheriting from Base
class Grandchild : private Parent {
public:
    int id_gc;
    void printID_gc() {
        cout << "Grandchild ID: " << id_gc << endl;
    }
};

// Derived class protectedly inheriting from Base
class AnotherChild : protected Parent {
public:
    int id_ac;
    void printID_ac() {
        cout << "Another Child ID: " << id_ac << endl;
    }
};

int main() {
    // Public inheritance
    Child obj1;
    obj1.id_p = 7;
    obj1.printID_p();
    obj1.id_c = 91;
    obj1.printID_c();

    // Private inheritance
    Grandchild obj2;
    obj2.id_gc = 42;
    obj2.printID_gc();

    // Protected inheritance
    AnotherChild obj3;
    obj3.id_ac = 55;
    obj3.printID_ac();

    return 0;
}
