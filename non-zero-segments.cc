#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int count = 0;
    int currsum = 0;
    int k = 0;
    unordered_map<int, int> hmap;
    for (int i = 0; i < v.size(); i++)
    {
        currsum += v[i];
        if (currsum == k)
            count++;
        if (hmap.find(currsum - k) != hmap.end())
            count += hmap[currsum - k];
        hmap[currsum]++;
    }
    cout << count << endl;
}