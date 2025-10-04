#include <iostream>
using namespace std;
class A {
public:
    A(int p) { 
        cout << "Base Class Constructor\n"<<p;
     } 
};
class B{
public:
    B(float p1) {
        cout << "Derived Class Constructor\n"<<p1;
    }
};
class C : public A, public B {
public:
    C(int x, float y):A(x),B(y) {
        cout << "Another Derived Class Constructor\n"<<y<<x;
    }
};
int main() {
    C objC(10, 5.5);
    return 0;
}