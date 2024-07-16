#include <iostream>
#include <string_view>
#include <vector>

class Animal {
private:
    std::string_view m_name;

public:
    Animal(std::string_view name) : m_name(name) {}

    const std::string& getName() const {
        return m_name;
    }

    virtual std::string_view speak() const {
        return "???";
    }
};

class Cat : public Animal {
public:
    Cat(std::string_view name) : Animal(name) {}

    std::string_view speak() const override {
        return "Meow";
    }
};

class Dog : public Animal {
public:
    Dog(std::string_view name) : Animal(name) {}

    std::string_view speak() const override {
        return "Woof";
    }
};

void report(const Animal& animal) {
    std::cout << animal.getName() << " says " << animal.speak() << '\n';
}

int main() {
    Cat cat("Fred");
    Dog dog("Garbo");

    report(cat);
    report(dog);

    return 0;
}
