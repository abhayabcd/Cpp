#include <iostream>
using namespace std;
class constc
{
    int a;

public:
    void normal_fun(int x)
    {
        a = x;
        cout << "normal function " << a << endl;
    }
    void const_fun() const;
};
void constc ::const_fun() const
{
    int y = 20;
    cout << "const function " << y << endl;
}
int main()
{
    constc obj;
    obj.normal_fun(10);
    obj.const_fun();
    return 0;
}
