#include <iostream>
using namespace std;
void sawap(int * a,int* b){
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}
int main() {
    int a=3,b=4;
    // clrscr();

    sawap(&a,&b);
    cout<<"a = "<<a<<"\nb = "<<b<<endl;

    // getch();
    return 0;
}
