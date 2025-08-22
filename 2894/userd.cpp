#include <iostream>

class Greeter {
public:
    void printHi() const {
        std::cout << "hi" << std::endl;
    }
};

int main() {
    Greeter greeter;
    greeter.printHi();
    return 0;
}