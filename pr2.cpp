#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3, n4;
    int avg;
    cout << "Enter four numbers: ";
    cin >> n1 >> n2 >> n3 >> n4;

    avg = (n1 + n2 + n3 + n4) / 4;
    cout << "The average is: " << avg << endl;

    return 0;
}
