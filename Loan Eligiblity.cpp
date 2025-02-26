#include <iostream>
using namespace std;
int main() {
    double salary;
    int creditScore, age;
    cout << "Enter your monthly salary: ";
    cin >> salary;
    cout << "Enter your credit score: ";
    cin >> creditScore;
    cout << "Enter your age: ";
    cin >> age;
    if (salary >= 25000 && creditScore >= 650 && age >= 21 && age <= 60) {
        cout << "Congratulations! You are eligible for the loan." << endl;
    } else {
        cout << "Sorry, you are not eligible for the loan." << endl;
    }
    return 0;
}