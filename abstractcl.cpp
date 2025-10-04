#include <iostream>
using namespace std;
class a{
public:
    virtual void show()=0; // pure virtual function
};
class b : public a{
public:
    void show() {
        cout << "Class B\n";
    }
};
int main() {
    b objB;
    objB.show();
    return 0;
}