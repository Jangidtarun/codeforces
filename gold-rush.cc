#include <bits/stdc++.h>
using namespace std;

bool dfs(int n, int m)
{
    if (n == m)
        return true;
    if (n % 3 != 0)
        return false;
    return dfs(n / 3, m) or dfs(2 * n / 3, m);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        bool ans = false;
        cout << (dfs(n, m) ? "yes" : "no") << endl;
    }
}