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
    obj.show();
    return 0;
}