/*Develop a C++ program that swaps two integer values using pointers. Use type 
casting to access and manipulate the values through pointers.*/

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    cout<<"Before swapping: "<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<"After swapping: "<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    return 0;
}