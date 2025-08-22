#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int age;

    void input() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter age: ";
        std::cin >> age;
    }

    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    const int SIZE = 3;
    Student students[SIZE];

    std::cout << "Enter details for " << SIZE << " students:\n";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Student " << i + 1 << ":\n";
        students[i].input();
    }

    std::cout << "\nStudent details:\n";
    for (int i = 0; i < SIZE; ++i) {
        students[i].display();
    }

    return 0;
}