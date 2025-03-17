//Bank details using concept of constructor add more details 

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
    bank()
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
};
int main()
{
    bank b;
    b.display();
    return 0;
}
