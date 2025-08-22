#include <iostream>
#include <new> // For std::nothrow

class MyClass {
public:
    int x;
    MyClass(int val) : x(val) {
        std::cout << "Constructor called\n";
    }
    ~MyClass() {
        std::cout << "Destructor called\n";
    }

    // Overload new operator
    void* operator new(size_t size) {
        std::cout << "Custom new operator called\n";
        void* p = ::operator new(size);
        return p;
    }

    // Overload delete operator
    void operator delete(void* p) {
        std::cout << "Custom delete operator called\n";
        ::operator delete(p);
    }
};

int main() {
    MyClass* obj = new MyClass(42);
    delete obj;
    return 0;
}