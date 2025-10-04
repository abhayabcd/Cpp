#include <iostream>
using namespace std;
class emp{
    int a,b;
    public:
    emp(){}
    emp(int x,int y){
        a=x;
        b=y;
    }
    emp operator + (emp obj){
        emp temp;
        temp.a=a+obj.a;
        temp.b=b+obj.b;
        return temp;

    }
      emp operator - (emp obj){
        emp temp;
        temp.a=a-obj.a;
        temp.b=b-obj.b;
        return temp;

    }
      emp operator / (emp obj){
        emp temp;
        temp.a=a/obj.a;
        temp.b=b/obj.b;
        return temp;

    }
      emp operator * (emp obj){
        emp temp;
        temp.a=a*obj.a;
        temp.b=b*obj.b;
        return temp;

    }
    void show(){
        cout<<"\na: "<<a<<" b: "<<b;
    }
};
int main() {

    emp obj1(5,10);
    emp obj2(10,20);
    emp obj3;
    obj3=obj1+obj2;
    obj3.show();
    obj3=obj1-obj2;
    obj3.show();
    obj3=obj1/obj2;
    obj3.show();
    obj3=obj1*obj2;
    obj3.show();
    return 0;
}