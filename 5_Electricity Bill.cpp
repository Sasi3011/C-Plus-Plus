#include <iostream>
using namespace std;

int main()
{
    int units;
    cout << "Enter the number of units consumed: ";
    cin >> units;
    double bill = 0;
    if (units <= 50)
    {
        bill = units * 0.5;
    }
    else if (units <= 150)
    {
        bill = 25 + (units - 50) * 0.75;
    }
    else if (units <= 250)
    {
        bill = 100 + (units - 150) * 1.2;
    }
    else
    {
        bill = 220 + (units - 250) * 1.5;
    }
    cout << "Electricity bill: " << bill << endl;
    return 0;
}