#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void selectionSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                swap(&a[i], &a[j]);
            }
        }
    }
}
int main()
{
    int a[5] = {8, 4, 5, 6, 2};
    display(a, 5);
    selectionSort(a, 5);
    display(a, 5);
}