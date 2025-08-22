#include <iostream>

// Function with a default argument
void greet(const std::string& name = "Guest") {
    std::cout << "Hello, " << name << "!" << std::endl;
}

int main() {
    greet();              // Uses default argument
    greet("Alice");       // Uses provided argument
    return 0;
}