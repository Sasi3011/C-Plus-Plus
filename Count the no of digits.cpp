#include <iostream>
using namespace std;
int main() {
    int num, count = 0, temp;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;
    if (temp == 0) count = 1;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    cout << "Number of digits: " << count << endl;
    return 0;
}