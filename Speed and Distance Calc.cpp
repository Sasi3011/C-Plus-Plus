// Create a speed and distance calculator based on user inputs. 

#include <iostream>
using namespace std;

int main()
{
    int speed, time, distance;
    cout << "Enter speed: ";
    cin >> speed;
    cout << "Enter time: ";
    cin >> time;
    distance = speed * time;
    cout << "Distance: " << distance;
    return 0;
}