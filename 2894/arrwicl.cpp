#include <iostream>

class MyClass {
private:
    int arr[5]; // Array within class

public:
    MyClass() {
        // Initialize array elements
        for (int i = 0; i < 5; ++i) {
            arr[i] = i * 10;
        }
    }

    void printArray() const {
        for (int i = 0; i < 5; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.printArray();
    return 0;
}