#include <iostream>
using namespace std;
class demo{
   public: int a;
    demo(){
        a=10;
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