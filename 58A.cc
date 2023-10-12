#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string h = "hello";
    bool ans = false;
    int j = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == h[j])
            j++;
    if (j == 5)
        ans = true;

    cout << (ans ? "YES" : "NO") << endl;
}