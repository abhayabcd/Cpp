#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "add(2, 3) = " << add(2, 3) << endl;
    cout << "add(2.5, 3.7) = " << add(2.5, 3.7) << endl;
    cout << "add(1, 2, 3) = " << add(1, 2, 3) << endl;
    return 0;
}