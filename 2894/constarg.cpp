#include <iostream>

// Function that takes a const argument
void printValue(const int value) {
    std::cout << "Value: " << value << std::endl;
}

int main() {
    int x = 42;
    printValue(x);
    return 0;
}