#include <iostream>
using namespace std;

// Function with default parameter values
void displayInfo(string name = "Unknown", int age = 0) {
    cout << "Name: " << name << ", Age: " << age << endl;
}

int main() {
    displayInfo("Alice", 30);    // Both parameters provided
    displayInfo("Bob");          // Only name provided, age uses default
    displayInfo();               // Both use default values
    return 0;
}