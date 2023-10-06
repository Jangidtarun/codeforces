#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int n, m;
bool vis[N][N];
int a[N][N];

vector<pair<int, int>> dir = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

int dfs(int row, int col)
{
    if (row < 0 || row >= n || col < 0 ||
        col >= m || a[row][col] == 0)
        return 0;

    int ans = a[row][col];
    vis[row][col] = true;
    for (auto d : dir)
    {
        int currx = row + d.first, curry = col + d.second;
        bool visited = vis[currx][curry];
        if (!visited)
            ans += dfs(currx, curry);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                vis[i][j] = false;
            }

        int ans = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] and a[i][j] != 0)
                    ans = max(dfs(i, j), ans);
            }

        cout << ans << endl;
    }
}