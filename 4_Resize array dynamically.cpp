/*Implement a dynamic array that allows users to input values and resize the array 
dynamically as needed*/

#include<iostream>
using namespace std;
class dynamic_array
{
    private:
    int *arr;
    int size;
    public:
    dynamic_array()
    {
        size=0;
        arr=new int[size];
    }
    void getdata()
    {
        cout<<"Enter the number of elements: ";
        cin>>size;
        arr=new int[size];
        cout<<"Enter the elements: ";
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
    }
    void display()
    {
        cout<<"The elements are: ";
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void resize()
    {
        int new_size;
        cout<<"Enter the new size: ";
        cin>>new_size;
        int *new_arr=new int[new_size];
        for(int i=0;i<size;i++)
        {
            new_arr[i]=arr[i];
        }
        delete[] arr;
        arr=new_arr;
        size=new_size;
    }
};
int main()
{
    dynamic_array d;
    d.getdata();
    d.display();
    d.resize();
    d.display();
    return 0;
}
