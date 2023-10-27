#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    bool a[n] = {false};
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        a[i] = tmp % 2;
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] == a[i - 1] and a[i] != a[i + 1])
            ans = i + 1 + 1;
        else if (a[i] == a[i + 1] and a[i] != a[i - 1])
            ans = i - 1 + 1;
        else if (a[i - 1] == a[i + 1] and a[i] != a[i - 1])
            ans = i + 1;
        if (ans != 0)
            break;
    }
    cout << ans << endl;
}