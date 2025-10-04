#include <iostream>
using namespace std;
class demo{
    public: int a;
    public:
        void show(int x){

            cout<<"value of x is "<<x<<endl;
        }
};
int main() {
    void (demo::*ptr)(int) = &demo::show; // pointer to member function
    int demo::*p = &demo::a; // pointer to data member
    demo obj;
    obj.*p = 10; // accessing data member using pointer to data member
    cout << "value of a is " << obj.*p << endl;
    (obj.*ptr)(20); // accessing member function using pointer to member function
    return 0;
}  