#include <iostream>
// Class template for a Pair
template <typename T>
class Pair {
private:
    T first;
    T second;

public:
    Pair(T f, T s) : first(f), second(s) {}

    T getFirst() const {
        return first;
    }

    T getSecond() const {
        return second;
    }
};

// Function template to find the maximum of two values
template <typename T>
T max(T a, T b) {
    return (a < b) ? b : a;
}

int main() {
    // Using the Pair class template
    Pair<int> intPair(5, 10);
    Pair<double> doublePair(1.2, 3.4);

    std::cout << "Int Pair: " << intPair.getFirst() << ", " << intPair.getSecond() << std::endl;
    std::cout << "Double Pair: " << doublePair.getFirst() << ", " << doublePair.getSecond() << std::endl;

    // Using the max function template
    int intMax = max(5, 10);
    double doubleMax = max(1.2, 3.4);

    std::cout << "Max of 5 and 10: " << intMax << std::endl;
    std::cout << "Max of 1.2 and 3.4: " << doubleMax << std::endl;

    return 0;
}
