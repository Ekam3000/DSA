#include <bits/stdc++.h>
using namespace std;
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int linearSearch(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int binarySearch(int a[], int l, int h, int key)
{
    int m = (l + h) / 2;
    while (l <= h)
    {
        if (a[m] == key)
        {
            return m;
        }
        else if (key > a[m])
        {
            return binarySearch(a,m+1,h,key);
        }
        else
        {
            return binarySearch(a,l,m-1,key);
        }
    }
    return -1;
}
int main()
{
    int a[10] = {1, 2, 4, 5, 6, 7, 9};
    display(a, 7);
    cout << "Enter the number you want to find" << endl;
    int t;
    cin >> t;
    // cout << linearSearch(a, 7, t);
    cout << binarySearch(a, 0, 7, t);
    return 0;
}