#include <iostream>
using namespace std;

// Forward declaration of ClassB
class ClassB;

// ClassA with a private member
class ClassA {
private:
    int numA;

public:
    ClassA() : numA(12) {} // Constructor to initialize numA
    friend int add(ClassA, ClassB); // Friend function declaration
};

// ClassB with a private member
class ClassB {
private:
    int numB;

public:
    ClassB() : numB(1) {} // Constructor to initialize numB
    friend int add(ClassA, ClassB); // Friend function declaration
};

// Friend function to add members of both classes
int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}
