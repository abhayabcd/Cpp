#include <iostream>

class MyClass {
public:
    void showMessage(); // Declaration of member function
};

// Definition of member function outside the class
void MyClass::showMessage() {
    std::cout << "Hello from outside member function!" << std::endl;
}

int main() {
    MyClass obj;
    obj.showMessage();
    return 0;
}