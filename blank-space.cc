#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        int maxzeros = 0;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            if (tmp)
                maxzeros = 0;
            else
                ans = max(ans, ++maxzeros);
        }
        cout << ans << endl;
    }
}