//Create a program that generates a personalized greeting message based on user input. 

#include <iostream>
using namespace std;
class greeting
{
    private:
    char name[20];
    int age;
    public:
    greeting()
    {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your age: ";
        cin>>age;
    }
    void display()
    {
        cout<<"Hello "<<name<<", you are "<<age<<" years old."<<endl;
    }
};
int main()
{
    greeting g;
    g.display();
    return 0;
}