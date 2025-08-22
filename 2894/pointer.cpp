#include <iostream>

int main() {
    int value = 42;
    int* ptr = &value;

    std::cout << "Value: " << value << std::endl;
    std::cout << "Address of value: " << &value << std::endl;
    std::cout << "Pointer (ptr): " << ptr << std::endl;
    std::cout << "Value via pointer: " << *ptr << std::endl;

    return 0;
}