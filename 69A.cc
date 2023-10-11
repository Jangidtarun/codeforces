#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 0, y = 0, z = 0;
    while (n--)
    {
        int tmpx, tmpy, tmpz;
        cin >> tmpx >> tmpy >> tmpz;
        x += tmpx;
        y += tmpy;
        z += tmpz;
    }
    if (x or y or z)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}