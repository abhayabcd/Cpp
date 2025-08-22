#include <iostream>

class MyClass {
public:
    static int staticValue;

    void showValue() {
        std::cout << "Static Value: " << staticValue << std::endl;
    }
};

// Definition of static data member
int MyClass::staticValue = 42;

int main() {
    MyClass obj1, obj2;
    obj1.showValue();
    obj2.staticValue = 100;
    obj1.showValue();
    return 0;
}