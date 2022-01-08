#include <bits/stdc++.h>
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
void binaryToDecimal(int n)
{
    int ans = 0;
    for (int x = 1; n > 0; x = x * 2)
    {
        ans = ans + x * (n % 10);
        n = n / 10;
    }
    cout << "Decimal " << ans << endl;
}
void octaToDecimal(int n)
{
    int ans = 0;
    for (int x = 1; n > 0; x = x * 8)
    {
        ans = ans + x * (n % 10);
        n = n / 10;
    }
    cout << "Decimal " << ans << endl;
}
void hexaToDecimal(string s)
{
    int x = 1;
    int ans = 0;
    int sz = s.size();
    for (int i = sz - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            ans = ans + x * (s[i] - '0');
        }
        else if (s[i] >= 'A' && s[i] <= 'F')
        {
            ans = ans + x * (s[i] - 'A' + 10);
        }
        x = x * 16;
    }
    cout << "Decimal " << ans << endl;
}
int addBinary(int a, int b)
{
}
int main()
{
    cout << "1:-decimalToBinary \n2:-decimalToOcta \n3:-decimalToHexa\n4:-binaryToDecimal\n5:-octaToDecimal\n6:-hexaToDecimal" << endl;
    int choice;
    cin >> choice;
    string s;
    switch (choice)
    {
        int n;
        // char s[100];
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
    case 4:
        cout << "Enter a binary number" << endl;
        cin >> n;
        cout << "Binary " << n << endl;
        binaryToDecimal(n);
        break;
    case 5:
        cout << "Enter a octa number" << endl;
        cin >> n;
        cout << "Octa " << n << endl;
        octaToDecimal(n);
        break;
    case 6:
        cout << "Enter a hexa number" << endl;
        cin >> s;
        cout << "Hexa " << s << endl;
        hexaToDecimal(s);
        break;

    default:
        break;
    }
    // Method 1:-
    // Now for adding of 2 binary numbers what we can do is phele dono binary numbers ko decimal mai convert kro then dono ko add kro and then convert that sum of decimal number into the binary number
    // int n1,n2,n3;
    // n3=binaryToDecimal(n1)+binaryToDecimal(n2);
    // decimalToBinary(n3);
   
    // Method 2:-
    // int a, b;
    // cin >> a >> b;
    // addBinary(a, b);
}