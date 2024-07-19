#include <iostream>
#include <typeinfo>
using namespace std;

class Base {
public:
    virtual void show() {}
};

class Derived : public Base {};

int main() {
    Base *b = new Derived;
    if(typeid(*b) == typeid(Derived)) {
        cout << "b is of type Derived" << endl;
    }
    delete b;
    return 0;
}
