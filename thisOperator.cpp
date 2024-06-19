#include <iostream>
class MyClass {
private:
    int attribute;
public:
    MyClass(int attribute) {
        // Use 'this' to refer to the member variable when parameter name is the same
        this->attribute = attribute;
    }
    void printAttribute() {
        std::cout << "The attribute value is: " << this->attribute << std::endl;
    }
};
int main() {
    MyClass obj(10);
    obj.printAttribute();
    return 0;
}
