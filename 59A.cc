#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int up = 0, dw = 0;
    for (char c : s)
    {
        if (isupper(c))
            up++;
        else
            dw++;
    }
    if (up > dw)
        for (int i = 0; i < s.length(); i++)
            s[i] = toupper(s[i]);
    else
        for (int i = 0; i < s.length(); i++)
            s[i] = tolower(s[i]);
    cout << s << endl;
}