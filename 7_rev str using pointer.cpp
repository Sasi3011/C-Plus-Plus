/*Write a function that reverses a string using pointers instead of indexing.*/

#include <iostream>
using namespace std;

void reverse(char *str)
{
    char *end = str;
    while (*end)
        end++;
    end--;
    while (str < end)
    {
        char temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}

int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    reverse(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}
