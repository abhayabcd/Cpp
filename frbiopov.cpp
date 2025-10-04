#include <iostream>
using namespace std;
class over{
    int a,b;
    public:
    over(){}
    over(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"\na: "<<a<<" b: "<<b;
    }
    friend over operator + (over obj1,over obj2);
};
over operator + (over obj1,over obj2){
    over temp;
    temp.a=obj1.a+obj2.a;
    temp.b=obj1.b+obj2.b;
    return temp;
}
int main() {
    over obj1(5,10),obj2(20,30);
    over obj3;
    obj3 = obj1 + obj2;
    obj3.show();
    return 0;
}