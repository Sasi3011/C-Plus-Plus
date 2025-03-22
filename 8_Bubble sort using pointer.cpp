/*Implement Bubble Sort using function pointers to allow sorting in ascending or 
descending order dynamically.*/

#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n, bool (*compare)(int, int))
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (!compare(arr[j], arr[j + 1]))
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

bool ascending(int a, int b)
{
    return a < b;
}

bool descending(int a, int b)
{
    return a > b;
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
    cout << "Enter 1 to sort in ascending order, 0 for descending order: ";
    bool order;
    cin >> order;
    if (order)
        bubble_sort(arr, n, ascending);
    else
        bubble_sort(arr, n, descending);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}

