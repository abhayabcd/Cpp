#include <iostream>
using namespace std;
class over{
    int a;
    public:
    over(){}    
    over(int x){
        a=x;
    }
    void show(){
        cout<<"\na: "<<a;
    }
    friend over operator ++ (over &obj);    
};
over operator ++ (over &obj) {
    over temp;
    temp.a=++obj.a;
    return temp;
}
int main() {
    over obj1(5);
    over obj2;
    obj2 = ++obj1;
    obj2.show();
    return 0;
}