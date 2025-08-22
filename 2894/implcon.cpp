#include <iostream>

class MyClass {
public:
    int value;
    // Implicit conversion constructor
    MyClass(int v) : value(v) {}
};

void printValue(const MyClass& obj) {
    std::cout << "Value: " << obj.value << std::endl;
}

int main() {
    MyClass obj = 42; // Implicit conversion from int to MyClass
    printValue(100);  // Implicit conversion when passing int to function
    return 0;
}