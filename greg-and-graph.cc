#include <bits/stdc++.h>
using namespace std;
const int N = 510;
int dist[N][N];

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> dist[i][j];

    vector<int> g(n);
    for (int i = 0; i < n; i++)
        cin >> g[i];

    vector<int> ans;
    reverse(g.begin(), g.end());
    for (int k = 0; k < n; k++)
    {
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                dist[i][j] = min(dist[i][j], dist[i][g[k]] + dist[g[k]][j]);

        long long sum = 0;
        for (int i = 0; i <= k; i++)
            for (int j = 0; j <= k; j++)
                sum += dist[g[i]][g[j]];
        ans.push_back(sum);
    }

    reverse(ans.begin(), ans.end());

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
}