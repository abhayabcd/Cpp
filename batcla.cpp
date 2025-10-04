#include <iostream>
using namespace std;
class basic{
    int n;
    public:
    basic(int n){
        this->n=n;
    }
    void show(){
        cout<<"n: "<<n;
    }
};
int main() {
    basic obj=10;
    obj.show();
    return 0;
}