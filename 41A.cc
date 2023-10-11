#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    bool var = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[s.length() - i-1])
            var = false;
    }
    cout << (var ? "YES" : "NO") << endl;
}