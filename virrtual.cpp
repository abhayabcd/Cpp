#include <iostream>
using namespace std;
class a
{
public:
    void showa() { cout << "Class A\n"; }
};
class b : virtual public a
{
public:
    void showb() { cout << "Class B (Single Inheritance from A)\n"; }
};
class c : virtual public a
{
public:
    void showc() { cout << "Class C (Single Inheritance from A)\n"; }
};
class d : public b, public c
{
public:
    void showd() { cout << "Class D (Multiple Inheritance from B and C)\n"; }
};
int main() {
    d objD;

    objD.showb();
    objD.showc();
    objD.showd();
    objD.showa(); // Resolves ambiguity due to virtual inheritance
    return 0;
}