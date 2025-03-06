// Write  an  age  difference  calculator  that  finds  the  difference  between  two  given 
// birthdates

#include <iostream>
using namespace std;

int main(){
    int d1,m1,y1,d2,m2,y2;
    cout<<"Enter the first birthdate (dd mm yyyy): ";
    cin>>d1>>m1>>y1;
    cout<<"Enter the second birthdate (dd mm yyyy): ";
    cin>>d2>>m2>>y2;
    if(y1>y2){
        cout<<"The age difference is "<<y1-y2<<" years";
    }
    else if(y1==y2){
        if(m1>m2){
            cout<<"The age difference is "<<m1-m2<<" months";
        }
        else if(m1==m2){
            if(d1>d2){
                cout<<"The age difference is "<<d1-d2<<" days";
            }
            else if(d1==d2){
                cout<<"The age difference is 0 days";
            }
            else{
                cout<<"The age difference is "<<d2-d1<<" days";
            }
        }
        else{
            cout<<"The age difference is "<<m2-m1<<" months";
        }
    }
    else{
        cout<<"The age difference is "<<y2-y1<<" years";
    }
}