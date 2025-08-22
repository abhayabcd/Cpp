#include <iostream>

class MyClass {
private:
    void printHi() {
        std::cout << "Hi" << std::endl;
    }

public:
    void callPrintHi() {
        printHi();
    }
};

int main() {
    MyClass obj;
    obj.callPrintHi();
    return 0;
}