#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool nluckey = true;
    int num = 0;
    for (char c : s)
    {
        if (c == '4' or c == '7')
            num++;
    }
    if (num == 0)
        nluckey = false;
    while (num > 0)
    {
        int tmp = num % 10;
        if (tmp != 4 and tmp != 7)
        {
            nluckey = false;
            break;
        }
        num /= 10;
    }
    cout << (nluckey ? "YES" : "NO") << endl;
}