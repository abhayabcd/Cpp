#include <iostream>

class MyClass {
private:
    int value;
public:
    MyClass(int v = 0) : value(v) {}

    // Assignment operator
    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            value = other.value;
        }
        return *this;
    }

    void print() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    MyClass a(10);
    MyClass b;
    b = a; // Using assignment operator
    b.print();
    return 0;
}