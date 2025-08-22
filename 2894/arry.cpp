#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    // Input elements
    cout << "Enter " << SIZE << " integers:\n";
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }

    // Output elements
    cout << "You entered: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}