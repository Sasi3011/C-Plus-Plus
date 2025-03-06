#include <iostream>
using namespace std;
int main() {
    string name;
    int hoursWorked;
    double hourlyRate, taxRate, grossSalary, netSalary, tax;
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter hours worked: ";
    cin >> hoursWorked;
    cout << "Enter hourly rate: ";
    cin >> hourlyRate;
    cout << "Enter tax rate (%): ";
    cin >> taxRate;
    grossSalary = hoursWorked * hourlyRate;
    tax = grossSalary * taxRate / 100;
    netSalary = grossSalary - tax;
    cout << "Employee Name: " << name << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Net Salary after Tax: $" << netSalary << endl;
    return 0;
}