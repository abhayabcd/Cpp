#include <iostream>

// Define a symbolic constant for PI
#define PI 3.14159

int main() {
    double radius;
    std::cout << "Enter radius: ";
    std::cin >> radius;

    double area = PI * radius * radius;
    std::cout << "Area of circle: " << area << std::endl;

    return 0;
}