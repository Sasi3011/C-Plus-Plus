/*Write a function to merge two sorted arrays into a single sorted array using pointers givesimple code.*/

#include <iostream>
using namespace std;

void merge(int *arr1, int *arr2, int n1, int n2, int *result)
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
            result[k++] = arr1[i++];
        else
            result[k++] = arr2[j++];
    }
    while (i < n1)
        result[k++] = arr1[i++];
    while (j < n2)
        result[k++] = arr2[j++];
}

int main()
{
    int n1, n2;
    cout << "Enter the size of the first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
    cout << "Enter the size of the second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];
    int result[n1 + n2];
    merge(arr1, arr2, n1, n2, result);
    cout << "Merged array: ";
    for (int i = 0; i < n1 + n2; i++)
        cout << result[i] << " ";
    cout << endl;
    return 0;
}

