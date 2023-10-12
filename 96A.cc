#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool ans = false;

    int start = 0, end = 1;
    while (start < end and end < s.length())
    {
        while (s[end] == s[start])
        {
            end++;
        }
        if (end - start >= 7)
            ans = true;
        start = end;
        end++;
    }
    cout << (ans ? "YES" : "NO") << endl;
}