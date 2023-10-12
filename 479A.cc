#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    if (a == 1)
    {
        if (c == 1)
            ans = a + b + c;
        else
            ans = (a + b) * c;
    }
    else if (b == 1)
    {
        if (a > c)
            ans = a * (b + c);
        else
            ans = (a + b) * c;
    }
    else if (c == 1)
    {
        if (a == 1)
            ans = a + b + c;
        else
            ans = a * (b + c);
    }
    else
        ans = a * b * c;
    cout << ans << endl;
}