#include <iostream>

// Inline function to add two integers
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 3;
    std::cout << "Sum: " << add(x, y) << std::endl;
    return 0;
}