// lambda
// syntax:
// [capture](parameter){ 
//    // body
// };
// []-->capture
//   ->it is used to capture the variables used for the function.
//   ->it will not accept any values from outside.
//   [&]->it will accept reference of the variables.
//   [=]->it will accept the value of the variables.
//   [&a,b]->it will accept the reference of the variables a and b.

// ARGUMENTS
//  ->(int a)
//    (float b)
//    (int c, float d)

//Codes->return
// 

/*
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=10;
    auto ans=[=](){
        return a+b;
    };
    cout<<ans();
    return 0;
}
*/
/*/
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=10;
    auto ans=[&](){
        a=22;
        b=98;
        return a+b;
    };
    cout<<ans();
    return 0;
}*/
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    auto ans=[&](){
        int count = 0;
        for(int x:v)
        {
            if(x%2==0)
            {
                count++;
            }
        }
        return count;
    };
    cout<<ans();
    return 0;
}
*/

