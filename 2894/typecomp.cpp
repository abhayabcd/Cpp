#include <iostream>
#include <typeinfo>
#include <type_traits>

template<typename T, typename U>
void checkTypeCompatibility() {
    std::cout << "Type T: " << typeid(T).name() << std::endl;
    std::cout << "Type U: " << typeid(U).name() << std::endl;

    if (std::is_convertible<T, U>::value) {
        std::cout << "T is convertible to U." << std::endl;
    } else {
        std::cout << "T is NOT convertible to U." << std::endl;
    }

    if (std::is_same<T, U>::value) {
        std::cout << "T and U are the same type." << std::endl;
    } else {
        std::cout << "T and U are different types." << std::endl;
    }
}

int main() {
    // Example usage
    checkTypeCompatibility<int, double>();
    checkTypeCompatibility<double, int>();
    checkTypeCompatibility<int, int>();
    checkTypeCompatibility<int, std::string>();

    return 0;
}