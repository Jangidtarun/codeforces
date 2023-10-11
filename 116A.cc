#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int current = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        current += b - a;
        ans = max(ans, current);
    }
    cout << ans << endl;
}