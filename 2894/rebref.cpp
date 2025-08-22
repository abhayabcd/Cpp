#include <iostream>

// Function that returns a reference to an element in an array
int& getElement(int arr[], int index) {
    return arr[index];
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    // Get reference to the third element
    int& ref = getElement(numbers, 2);
    std::cout << "Before: " << ref << std::endl;
    // Modify the element through the reference
    ref = 100;
    std::cout << "After: " << numbers[2] << std::endl;
    return 0;
}