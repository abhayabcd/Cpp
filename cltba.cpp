#include <iostream>
using namespace std;
class type{
    int a;
    public:
    type(int a){
        this->a=a;
    }
     operator int(){
        cout<<"\na: "<<a;
    }

};
int main() {
    type obj1=10;
    int x=obj1;
    cout<<"\nx: "<<x;
    return 0;
}