#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    float grade;
};

int main() {
    Student s;

    cout << "Enter student ID: ";
    cin >> s.id;
    cin.ignore(); // Clear newline from buffer

    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter student grade: ";
    cin >> s.grade;

    cout << "\nStudent Data:\n";
    cout << "ID: " << s.id << "\n";
    cout << "Name: " << s.name << "\n";
    cout << "Grade: " << s.grade << "\n";

    return 0;
}