#include<iostream>
using namespace std;
class employee
{
    private:
    int emp_id;
    char name[20];
    int age;
    float salary;
    public:
    void getdata()
    {
        cout<<"Enter the employee id: ";
        cin>>emp_id;
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the age: ";
        cin>>age;
        cout<<"Enter the salary: ";
        cin>>salary;
    }
    void display()
    {
        cout<<"Employee id: "<<emp_id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main()
{
    employee e;
    e.getdata();
    e.display();
    return 0;
}