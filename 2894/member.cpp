#include <iostream>

class Member {
public:
    int value;
    Member(int v) : value(v) {}

    // Overload member referencing operator (->)
    Member* operator->() {
        return this;
    }

    void show() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Member m(42);
    m->show(); // Using overloaded -> operator
    return 0;
}