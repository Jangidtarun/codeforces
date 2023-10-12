#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> a;
    for (int i = 0; i < n; i++)
    {
        int pi;
        cin >> pi;
        a.insert({pi, i + 1});
    }
    for (auto val : a)
        cout << val.second << " ";
    cout << endl;
}