#include <iostream>
using namespace std;

// User Defined Function for if-else
void checkNumber(int num) {
    if (num > 0)
        cout << num << " is positive.\n";
    else if (num < 0)
        cout << num << " is negative.\n";
    else
        cout << num << " is zero.\n";
}

// User Defined Function for switch-case
void dayOfWeek(int day) {
    switch (day) {
        case 1: cout << "Monday\n"; break;
        case 2: cout << "Tuesday\n"; break;
        case 3: cout << "Wednesday\n"; break;
        case 4: cout << "Thursday\n"; break;
        case 5: cout << "Friday\n"; break;
        case 6: cout << "Saturday\n"; break;
        case 7: cout << "Sunday\n"; break;
        default: cout << "Invalid day\n";
    }
}

// User Defined Function for for loop
void printNumbers(int n) {
    for (int i = 1; i <= n; ++i)
        cout << i << " ";
    cout << endl;
}

// User Defined Function for while loop
void countdown(int n) {
    while (n > 0) {
        cout << n << " ";
        --n;
    }
    cout << endl;
}

// User Defined Function for do-while loop
void repeatMessage(string msg, int times) {
    int count = 0;
    do {
        cout << msg << endl;
        ++count;
    } while (count < times);
}

int main() {
    checkNumber(-5);
    dayOfWeek(3);
    printNumbers(5);
    countdown(5);
    repeatMessage("Hello!", 3);
    return 0;
}