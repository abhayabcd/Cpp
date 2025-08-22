#include <iostream>

class MyClass {
public:
    // Member function declaration
    void displayMessage();
};

// Member function definition
void MyClass::displayMessage() {
    std::cout << "Hello from member function!" << std::endl;
}

int main() {
    MyClass obj;
    obj.displayMessage();
    return 0;
}