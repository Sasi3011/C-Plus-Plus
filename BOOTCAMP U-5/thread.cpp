#include<iostream>
#include<thread>
using namespace std;
void print(int id_)
{
    cout<<"Hello World"<<endl;
}
int main()
{
    thread t1(print(1));
    cout<<"Completed the task"<<endl;
    t1.join();
    return 0;
}