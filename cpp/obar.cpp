#include <iostream>
using namespace std;
class obj{
    int a;
    public :void get(int x);
    void mul(obj o1,obj o2);
};
void obj ::get(int x){
    a=x;
}
void obj ::mul(obj o1,obj o2){
    cout << o1.a*o2.a;
}
int main() {
    obj o1,o2,o3;
    o1.get(5);
    o2.get(10);
    o3.mul(o1,o2);
    return 0;
}