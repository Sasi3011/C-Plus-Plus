// Write a program to get the n values from the user with the integer tyoe and find the sum of all n values, max, min in the values and print the values in reverse order and print the values in ascending order.

// IP:
// 5
// 5 3 1 4 2
// OP:
// SUM=15
// MAX-5
// MIN=1
// REVERSE= 2 4 1 3 5
// ASCENDING= 1 2 3 4 5
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> values(n);
    cout << "Enter the values: ";
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    // Calculate sum
    int sum = 0;
    for (int val : values) {
        sum += val;
    }

    // Find max and min
    int maxVal = *max_element(values.begin(), values.end());
    int minVal = *min_element(values.begin(), values.end());

    // Reverse the values
    vector<int> reversedValues = values;
    reverse(reversedValues.begin(), reversedValues.end());

    // Sort the values in ascending order
    vector<int> sortedValues = values;
    sort(sortedValues.begin(), sortedValues.end());

    // Output results
    cout << "SUM=" << sum << endl;
    cout << "MAX=" << maxVal << endl;
    cout << "MIN=" << minVal << endl;

    cout << "REVERSE= ";
    for (int val : reversedValues) {
        cout << val << " ";
    }
    cout << endl;

    cout << "ASCENDING= ";
    for (int val : sortedValues) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
