// Maximum and minimum of an array using minimum number of comparisons
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int a[size];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int min = a[0];
    int max = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }

        if (a[i] < min)
        {
            min = a[i];
        }
    }
    cout << "max: " << max << endl;
    cout << "min: " << min << endl;
}