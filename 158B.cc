#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], count[5] = {0};
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        count[a[i]]++;
    }

    ans += count[4] + count[3] + count[2] / 2;
    count[1] -= count[3];
    if (count[2] % 2)
    {
        ans++;
        count[1] -= 2;
    }
    if (count[1] > 0)
    {
        ans += (count[1] + 3) / 4;
    }
    cout << ans << endl;
}