// Implement a basic arithmetic calculator supporting +, -, *, /, and modulus operations.

#include <iostream>
using namespace std;

int main(){
    int a,b;
    char c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the operator: ";
    cin>>c;
    cout<<"Enter the second number: ";
    cin>>b;
    switch(c){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        case '%':
            cout<<a%b;
            break;
        default:
            cout<<"Invalid operator";
    }
}