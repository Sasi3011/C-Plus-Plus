/*Develop a class hierarchy for different types of bank accounts.*/

#include <iostream>
using namespace std;

// Base class: BankAccount
class BankAccount {
protected:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    virtual void deposit(double amount) {
        balance += amount;
    }

    virtual void withdraw(double amount) {
        if (amount <= balance) balance -= amount;
    }

    virtual void display() const {
        cout << "Balance: " << balance << endl;
    }

    virtual ~BankAccount() {}
};

// Derived class: SavingsAccount
class SavingsAccount : public BankAccount {
public:
    SavingsAccount(double initialBalance) : BankAccount(initialBalance) {}

    void display() const override {
        cout << "Savings Account - ";
        BankAccount::display();
    }
};

// Derived class: CheckingAccount
class CheckingAccount : public BankAccount {
public:
    CheckingAccount(double initialBalance) : BankAccount(initialBalance) {}

    void display() const override {
        cout << "Checking Account - ";
        BankAccount::display();
    }
};

// Main function
int main() {
    SavingsAccount savings(1000.0);
    CheckingAccount checking(500.0);

    savings.display();
    savings.deposit(200);
    savings.withdraw(500);
    savings.display();

    checking.display();
    checking.deposit(300);
    checking.withdraw(600);
    checking.display();

    return 0;
}
