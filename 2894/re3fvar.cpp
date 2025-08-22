#include <iostream>

int main() {
    int a = 10;
    int& ref = a; // ref is a reference to variable a

    std::cout << "a = " << a << std::endl;
    std::cout << "ref = " << ref << std::endl;

    ref = 20; // changing ref also changes a

    std::cout << "After modifying ref:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "ref = " << ref << std::endl;

    return 0;
}