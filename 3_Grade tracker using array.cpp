/*Develop a C++ program to implement a student grade tracker using arrays. Create an 
array to store the grades of multiple students and implement functions to calculate the 
average, find the highest and lowest grades, and display the overall performance.*/

#include<iostream>
using namespace std;
class student
{
    private:
    int n;
    float grade[100];
    public:
    void getdata()
    {
        cout<<"Enter the number of students: ";
        cin>>n;
        cout<<"Enter the grades of the students: "<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>grade[i];
        }
    }
    void display()
    {
        cout<<"The grades of the students are: "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<grade[i]<<" ";
        }
        cout<<endl;
    }
    void average()
    {
        float sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=grade[i];
        }
        cout<<"The average grade of the students is: "<<sum/n<<endl;
    }
    void highest()
    {
        float max=grade[0];
        for(int i=1;i<n;i++)
        {
            if(grade[i]>max)
            {
                max=grade[i];
            }
        }
        cout<<"The highest grade of the students is: "<<max<<endl;
    }
    void lowest()
    {
        float min=grade[0];
        for(int i=1;i<n;i++)
        {
            if(grade[i]<min)
            {
                min=grade[i];
            }
        }
        cout<<"The lowest grade of the students is: "<<min<<endl;
    }
};
int main()
{
    student s;
    s.getdata();
    s.display();
    s.average();
    s.highest();
    s.lowest();
    return 0;
}