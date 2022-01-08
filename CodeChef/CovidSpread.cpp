#include <iostream>
using namespace std;
int main()
{
    int t=0;
    // cin >> t;
    int ans = 1;
    while (t--)
    {
        int cases, days;
        cin >> cases >> days;
        int temp = 0;
        if (days <= 10)
        {
            for (int i = 0; i < days; i++)
            {
                ans=ans*2;
            }
        }else if(days<=20){
            for (int i = 11; i < days; i++)
            {
                ans=ans*3;
            }
        }
        cout<<ans;
    }
}