#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 1;
    string last;
    cin >> last;
    while (--n)
    {
        string s;
        cin >> s;
        if (s[0] == last[1])
            count++;
        last = s;
    }
    cout << count << endl;
}