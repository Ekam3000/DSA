// you have 1 rs
// 1rs=1choco
// 3wrappers=1choco
// find max choco
#include <iostream>
using namespace std;
int main()
{
    // cout<<"Enter the amount you have"<<endl;
    int rs;
    cin >> rs;
    int choco = 0;
    int wrapper = 0;
    while (rs > 0)
    {
        choco++;
        rs--;
        wrapper++;
        // cout << "********************" << endl;
        // cout << "Choco: " << choco << endl;
        // cout << "Rs: " << rs << endl;
        // cout << "Wrappers: " << wrapper << endl;
        // cout << "********************" << endl;

        if (wrapper == 3)
        {
            wrapper = 0;
            choco++;
            wrapper++;
            // cout << "********************" << endl;
            // cout << "Choco: " << choco << endl;
            // cout << "Rs: " << rs << endl;
            // cout << "Wrappers: " << wrapper << endl;
            // cout << "********************" << endl;
        }
    }
    cout << choco;
}