#include <iostream>
using namespace std;
class manip{
    string str;
    public:
    manip(string s){
        str=s;
    }
    void show(){
        cout<<"\nString: "<<str;
    }
    manip operator + (manip obj){
        manip temp("");
        temp.str=str+obj.str;
        return temp;
    }
};
int main() {
    manip obj1("Hello");
    manip obj2(" World");
    manip obj3 = obj1 + obj2;
    obj3.show();
    return 0;
}