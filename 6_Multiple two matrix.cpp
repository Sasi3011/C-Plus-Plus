/*Develop a program that multiplies two matrices using functions for input, 
processing, and output.*/

#include <iostream>
using namespace std;

void input(int a[][10], int b[][10], int r1, int c1, int r2, int c2)
{
    cout << "Enter the elements of the first matrix: ";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> a[i][j];
    cout << "Enter the elements of the second matrix: ";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> b[i][j];
}

void multiply(int a[][10], int b[][10], int r1, int c1, int r2, int c2, int result[][10])
{
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
                result[i][j] += a[i][k] * b[k][j];
        }
}

void output(int result[][10], int r1, int c2)
{
    cout << "The resultant matrix is: " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int a[10][10], b[10][10], result[10][10], r1, c1, r2, c2;
    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter the number of rows and columns of the second matrix: ";
    cin >> r2 >> c2;
    if (c1 != r2)
    {
        cout << "The matrices cannot be multiplied." << endl;
        return 0;
    }
    input(a, b, r1, c1, r2, c2);
    multiply(a, b, r1, c1, r2, c2, result);
    output(result, r1, c2);
    return 0;
}

