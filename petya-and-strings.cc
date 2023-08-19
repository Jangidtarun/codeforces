#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = 0; i < a.length(); i++)
    {
        int tmpa = tolower(a[i]), tmpb = tolower(b[i]);
        if (tmpa > tmpb)
        {
            ans = 1;
            break;
        }
        else if (tmpa < tmpb)
        {
            ans = -1;
            break;
        }
    }
    cout << ans << endl;
}