#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    pair<int, int> yx[n];
    bool ans = true;
    for (int i = 0; i < n; i++)
        cin >> yx[i].first >> yx[i].second;
    sort(yx, yx + n);
    for (int i = 0; i < n; i++)
    {
        if (s <= yx[i].first)
        {
            ans = false;
            break;
        }
        s += yx[i].second;
    }
    cout << (ans ? "YES" : "NO") << endl;
}