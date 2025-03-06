#include <iostream>
using namespace std;
int main() {
    int terms, a = 0, b = 1, next;
    cout << "Enter number of terms: ";
    cin >> terms;
    for (int i = 1; i <= terms; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}
