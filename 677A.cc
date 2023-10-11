#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int ans = 0;
    while (n--)
    {
        int hi;
        cin >> hi;
        if (hi % h == 0)
            ans += hi / h;
        else
            ans += 1 + hi / h;
    }
    cout << ans << endl;
}