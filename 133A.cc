#include <bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    cin >> p;
    bool ans = false;
    for (int i = 0; i < p.length(); i++)
        if (p[i] == 'H' or p[i] == 'Q' or p[i] == '9')
            ans = true;
    cout << (ans ? "YES" : "NO") << endl;
}