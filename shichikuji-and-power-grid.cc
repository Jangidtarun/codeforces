#include <bits/stdc++.h>
using namespace std;

void make_set(int v, vector<int> &parent, vector<int> &sz)
{
    parent[v] = v;
    sz[v] = 1;
}

int find_set(int v, vector<int> &parent)
{
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v], parent);
}

void union_set(int u, int v, vector<int> &parent, vector<int> &sz)
{
    u = find_set(u, parent);
    v = find_set(v, parent);
    if (u != v)
    {
        if (sz[u] < sz[v])
            swap(u, v);
        parent[v] = u;
        sz[u] += sz[v];
    }
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> coor(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> coor[i].first >> coor[i].second;

    vector<int> c(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> c[i];

    vector<int> k(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> k[i];

    vector<int> parent(n + 1), sz(n + 1);
    for (int i = 0; i <= n; i++)
        make_set(i, parent, sz);

    vector<pair<long long, pair<int, int>>> g;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            long long wt = 0;
            if (i == 0)
                wt = c[j];
            else
            {
                int dist = abs(coor[j].first - coor[i].first) + abs(coor[j].second - coor[i].second);
                wt = (k[i] + k[j]) * 1LL * dist;
            }

            g.push_back({wt, {i, j}});
        }
    }

    sort(g.begin(), g.end());
    long long cost = 0, psc = 0, cc = 0;
    vector<int> ps;
    vector<pair<int, int>> cd;
    for (auto edge : g)
    {
        int wt = edge.first;
        int u = edge.second.first, v = edge.second.second;
        if (find_set(u, parent) != find_set(v, parent))
        {
            union_set(u, v, parent, sz);
            if (u == 0)
            {
                psc++;
                ps.push_back(v);
            }
            else
            {
                cc++;
                cd.push_back({u, v});
            }
            cost += wt;
        }
    }

    cout << cost << endl;
    cout << psc << endl;
    for (auto val : ps)
        cout << val << " ";
    cout << endl;
    cout << cc << endl;
    for (auto val : cd)
        cout << val.first << " " << val.second << endl;
}