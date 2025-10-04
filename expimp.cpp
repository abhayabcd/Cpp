#include <iostream>
using namespace std;
class demo{
   public: int a;
    demo(int x){
        a=x;
    }
   public: void show(){
        cout<<a;
    }
};
int main() {
    demo obj(5);
    demo obj2=demo(10);
    obj2.show();
    obj.show();
    return 0;
}