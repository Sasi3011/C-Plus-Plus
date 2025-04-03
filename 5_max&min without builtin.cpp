/*Write a function that takes an integer array and finds the maximum and minimum 
values without using built-in functions give in simle way*/

#include <iostream>
using namespace std;  

void max_min(int arr[], int n, int &max, int &min)
{
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int max, min;
    max_min(arr, n, max, min);
    cout << "Maximum value: " << max << endl;
    cout << "Minimum value: " << min << endl;
    return 0;
}