#include <iostream>
#include <string> // Using std::string instead of char array
using namespace std;

struct Student {
    string name; // Easier to handle strings
    int age;
    double marks;
};

int main() {
    Student s1;
    s1.name = "John"; // Direct assignment, no need for strcpy
    s1.age = 21;
    s1.marks = 88.5;

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}
