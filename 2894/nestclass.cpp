#include <iostream>

class Outer {
public:
    class Inner {
    public:
        void display() {
            std::cout << "Inside Inner class" << std::endl;
        }
    };

    void show() {
        std::cout << "Inside Outer class" << std::endl;
    }
};

int main() {
    Outer outer;
    outer.show();

    Outer::Inner inner;
    inner.display();

    return 0;
}