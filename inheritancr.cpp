#include <iostream>
using namespace std;

// Single Inheritance
class A {
public:
    void showA() { cout << "Class A\n"; }
};
class B : public A {
public:
    void showB() { cout << "Class B (Single Inheritance from A)\n"; }
};

// Hierarchical Inheritance
class C : public A {
public:
    void showC() { cout << "Class C (Hierarchical Inheritance from A)\n"; }
};
class D : public A {
public:
    void showD() { cout << "Class D (Hierarchical Inheritance from A)\n"; }
};

// Multiple Inheritance
class E {
public:
    void showE() { cout << "Class E\n"; }
};
class E1 {
public:
    void showE1() { cout << "Class E1\n"; }
};
class F : public E1, public E {
public:
    void showF() { cout << "Class F (Multiple Inheritance from B and E)\n"; }
};

// Multilevel Inheritance
class G : public B {
public:
    void showG() { cout << "Class G (Multilevel Inheritance from B->A)\n"; }
};

// Hybrid Inheritance (combination of multiple and hierarchical)
class H : public C, public E {
public:
    void showH() { cout << "Class H (Hybrid Inheritance from C and E)\n"; }
};

int main() {
    // Single Inheritance
    B b;
    b.showA();
    b.showB();

    // Hierarchical Inheritance
    C c;
    D d;
    c.showA();
    c.showC();
    d.showA();
    d.showD();

    // Multiple Inheritance
    F f;
    f.showE1();
    f.showE();
    f.showF();

    // Multilevel Inheritance
    G g;
    g.showA();
    g.showB();
    g.showG();

    // Hybrid Inheritance
    H h;
    h.showA();
    h.showC();
    h.showE();
    h.showH();

    return 0;
}