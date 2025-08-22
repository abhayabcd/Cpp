#include <iostream>
using namespace std;

enum Weekday {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    Weekday today = Wednesday;

    cout << "Today is ";
    switch (today) {
        case Sunday: cout << "Sunday"; break;
        case Monday: cout << "Monday"; break;
        case Tuesday: cout << "Tuesday"; break;
        case Wednesday: cout << "Wednesday"; break;
        case Thursday: cout << "Thursday"; break;
        case Friday: cout << "Friday"; break;
        case Saturday: cout << "Saturday"; break;
    }
    cout << endl;

    return 0;
}