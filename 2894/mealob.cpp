#include <iostream>

class Meal {
public:
    Meal(const std::string& name, int calories)
        : name_(name), calories_(calories) {}

    void print() const {
        std::cout << "Meal: " << name_ << ", Calories: " << calories_ << std::endl;
    }

private:
    std::string name_;
    int calories_;
};

int main() {
    // Allocate a Meal object dynamically
    Meal* lunch = new Meal("Sandwich", 350);

    lunch->print();

    // Free the allocated memory
    delete lunch;

    return 0;
}