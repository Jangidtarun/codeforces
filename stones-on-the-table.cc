#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char lastch = '0';
    int ans = 0;
    while (n--)
    {
        char tmp;
        cin >> tmp;
        if (tmp == lastch)
        {
            ans++;
        }
        lastch = tmp;
    }
    cout << ans << endl;
}