#include <iostream>
using namespace std;
void display(int a[],int n){
    cout<<"Given array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    int ma = a[0];
    int mi = a[0];
    for (int i = 0; i < t; i++)
    {
        //Method: 1
        if (a[i] > ma)
        {
            ma = a[i];
        }
        if (a[i] < mi)
        {
            mi = a[i];
        }

        //Method: 2
        // ma=max(ma,a[i]);
        // mi=min(mi,a[i]);
    }
    cout << "Max: " << ma << endl;
    cout << "Min: " << mi << endl;
    display(a,t);

    return 0;
}
