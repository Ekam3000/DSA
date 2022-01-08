#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = max(a, max(b, c));
    cout << "MAX " << x << endl;
    if (x == a)
    {
        if ((a * a) == ((b * b) + (c * c)))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if (x == b)
    {
        if ((b * b) == ((a * a) + (c * c)))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        if ((c * c) == ((b * b) + (a * a)))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}