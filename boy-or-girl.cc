#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool hash[26] = {false};
    int nodds = 0;
    for (char c : s)
    {
        if (!hash[c - 'a'])
            nodds++;
        hash[c - 'a'] = true;
    }
    if (nodds % 2)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;
}