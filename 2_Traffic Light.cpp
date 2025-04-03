#include <iostream>
#include <ctime>
using namespace std;
void delay(int seconds) {
    int start = time(0); 
    while (time(0) - start < seconds);
}
int main() {
    cout << "Traffic Light Simulation\n" << endl;
    while (true) {
        cout << "RED Light - STOP" << endl;
        delay(3); 
        cout << "GREEN Light - GO" << endl;
        delay(3); 
        cout << "YELLOW Light - SLOW DOWN" << endl;
        delay(2); 
        cout << endl;
    }
    return 0;
}


#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    cout<<"Traffic Light Simulation"<<endl;
    while(true)
    {
        cout<<"RED Light - STOP"<<endl;
        Sleep(5000);
        cout<<"GREEN Light - GO"<<endl;
        Sleep(5000);
        cout<<"YELLOW Light - SLOW DOWN"<<endl;
        Sleep(5000);
    }
}