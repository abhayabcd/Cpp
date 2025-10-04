#include <iostream>
using namespace std;

int main()
{
    int i = 0, j = 0, count = 0;
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j < i; j++)
        {

            if (j % 2 != 0)
            {
                cout << j;
            }
            else
            {

                cout << "*";
            }
        }
        cout << "\n";
    }

    return 0;
}