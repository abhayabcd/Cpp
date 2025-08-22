#include <iostream>

int main() {
    // Define a local class inside main
    class LocalClass {
    public:
        void greet() {
            std::cout << "Hello from LocalClass!" << std::endl;
        }
    };

    LocalClass obj;
    obj.greet();

    return 0;
}