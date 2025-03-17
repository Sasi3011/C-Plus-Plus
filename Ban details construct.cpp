#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    string accountNumber;
    double balance;

public:
    // Constructor to initialize the bank account with account holder name, account number, and initial balance
    BankAccount(string name, string accNumber, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        cout << "Bank account created successfully for " << accountHolderName << endl;
    }

    // Function to display account details
    void displayAccountDetails() {
        cout << "/nAccount Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: $" << balance << endl;
    }
};

int main() {
    string name, accountNumber;
    double initialBalance;

    // Get account holder's name, account number, and initial deposit amount
    cout << "Enter account holder name: ";
    getline(cin, name);

    cout << "Enter account number: ";
    getline(cin, accountNumber);

    cout << "Enter initial balance: $";
    cin >> initialBalance;

    // Create a bank account using the constructor
    BankAccount account(name, accountNumber, initialBalance);

    // Display the bank account details
    account.displayAccountDetails();

    return 0;
}