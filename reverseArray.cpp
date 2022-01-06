// Write a program to reverse an array or string
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int a[size], b[size];
    cout << "Enter the elemensts" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    for (int i = size - 1, j = 0; i > -1; i--, j++)
    {
         b[j] = a[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}