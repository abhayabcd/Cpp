#include <iostream>

int value = 10; // Global variable

class Example {
public:
    static int value; // Static member variable
};

int Example::value = 20;

int main() {
    int value = 30; // Local variable

    std::cout << "Local value: " << value << std::endl;           // 30
    std::cout << "Global value: " << ::value << std::endl;        // 10
    std::cout << "Class static value: " << Example::value << std::endl; // 20

    return 0;
}