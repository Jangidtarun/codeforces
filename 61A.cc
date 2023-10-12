#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string ans = s1;
    for (int i = 0; i < s1.length(); i++)
        ans[i] = '0' + (s1[i] - '0') ^ (s2[i] - '0');
    cout << ans << endl;
}