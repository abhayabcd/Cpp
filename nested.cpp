#include <iostream>
using namespace std;
class nested
{
    
   public:
    class inner
    {
       public:
        void display()
        {
            cout << "Hello from the inner class!" << endl;
        }
    };
    void show()
    {
        inner obj;
        obj.display();
        cout << "Hello from the outer class!" << endl;
    }
      
};
int main()
{
    nested outer;
    outer.show();
    return 0;
}

 ;
