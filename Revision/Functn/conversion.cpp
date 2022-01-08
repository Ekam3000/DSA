#include <iostream>
using namespace std;
void decimalToBinary(int n)
{
    int a[10], i;
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    cout << "Binary ";
    for (i = i - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void decimalToOcta(int n)
{
    int a[10], i;
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 8;
        n = n / 8;
    }
    cout << "Octal ";
    for (i = i - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void decimalToHexa(int n)
{
    int a[10], i;
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 16;
        n = n / 16;
    }
    cout << "Hexa ";
    for (i = i - 1; i >= 0; i--)
    {
        if (a[i] > 9)
        {
            if (a[i] == 10)
            {
                cout << "A ";
            }
            if (a[i] == 11)
            {
                cout << "B ";
            }
            if (a[i] == 12)
            {
                cout << "C ";
            }
            if (a[i] == 13)
            {
                cout << "D ";
            }
            if (a[i] == 14)
            {
                cout << "E ";
            }
            if (a[i] == 15)
            {
                cout << "F ";
            }
            if (a[i] == 16)
            {
                cout << "G ";
            }
        }
        else
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
int main()
{
    cout << "1:-decimalToBinary \n2:-decimalToOcta \n3:-decimalToHexa" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
        int n;
    case 1:
        cout << "Enter a decimal number" << endl;
        cin >> n;
        cout << "Decimal " << n << endl;
        decimalToBinary(n);
        break;
    case 2:
        cout << "Enter a decimal number" << endl;
        cin >> n;
        cout << "Decimal " << n << endl;
        decimalToOcta(n);
        break;
    case 3:
        cout << "Enter a decimal number" << endl;
        cin >> n;
        cout << "Decimal " << n << endl;
        decimalToHexa(n);
        break;

    default:
        break;
    }
}