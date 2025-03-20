/*Implement a bank management system with C++ functions to handle transactions, 
account balances, and user authentication, thereby enhancing modularity, code 
reusability, and the overall efficiency of the program. */

#include<iostream>
using namespace std;
class bank
{
    private:
    int acc_no;
    char name[20];
    int age;
    float balance;
    public:
    void getdata()
    {
        cout<<"Enter the account number: ";
        cin>>acc_no;
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the age: ";
        cin>>age;
        cout<<"Enter the balance: ";
        cin>>balance;
    }
    void display()
    {
        cout<<"Account number: "<<acc_no<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
    void deposit()
    {
        float amount;
        cout<<"Enter the amount to be deposited: ";
        cin>>amount;
        balance+=amount;
        cout<<"Amount deposited successfully!"<<endl;
    }
    void withdraw()
    {
        float amount;
        cout<<"Enter the amount to be withdrawn: ";
        cin>>amount;
        if(amount>balance)
        {
            cout<<"Insufficient balance!"<<endl;
        }
        else
        {
            balance-=amount;
            cout<<"Amount withdrawn successfully!"<<endl;
        }
    }
};
int main()
{
    bank b;
    b.getdata();
    b.display();
    b.deposit();
    b.display();
    b.withdraw();
    b.display();
    return 0;
}
