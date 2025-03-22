/*Implement a function that checks if an array is a palindrome using pointers. simple code*/

#include <iostream>
using namespace std;

bool is_palindrome(int *arr, int n)
{
    int *end = arr + n - 1;
    while (arr < end)
    {
        if (*arr != *end)
            return false;
        arr++;
        end--;
    }
    return true;
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
    if (is_palindrome(arr, n))
        cout << "The array is a palindrome." << endl;
    else
        cout << "The array is not a palindrome." << endl;
    return 0;
}
