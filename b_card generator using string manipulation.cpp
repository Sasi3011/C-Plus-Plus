//Develop a secure access card generator using string manipulation techniques

#include <iostream>
#include <string>
using namespace std;
class card
{
    private:
    string name;
    string dob;
    string address;
    string phone;
    public:
    card()
    {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your date of birth: ";
        cin>>dob;
        cout<<"Enter your address: ";
        cin>>address;
        cout<<"Enter your phone number: ";
        cin>>phone;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Date of birth: "<<dob<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Phone number: "<<phone<<endl;
    }
};
int main()
{
    card c;
    c.display();
    return 0;
}