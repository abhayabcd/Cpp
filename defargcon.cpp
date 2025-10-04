#include <iostream>
using namespace std;
class demo{
   public: int a;
    demo(int x=5){
        a=x;
    }
   public: void show(){
        cout<<a;
    }
};
int main() {
    demo obj;
    obj.show();
    return 0;
}