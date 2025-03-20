//Write a program to generate unique blogpost identifiers based on author and title.

#include <iostream>
#include <string>
using namespace std;
class blogpost
{
    private:
    string author;
    string title;
    string identifier;
    public:
    blogpost()
    {
        cout<<"Enter the author's name: ";
        cin>>author;
        cout<<"Enter the title of the blogpost: ";
        cin>>title;
        identifier = author + "_" + title;
    }
    void display()
    {
        cout<<"Author: "<<author<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Identifier: "<<identifier<<endl;
    }
};
int main()
{
    blogpost b;
    b.display();
    return 0;
}