#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int last;
    cin >> last;
    int len = 1;
    int ans = len;
    for (int i = 1; i < n; i++)
    {
        int current;
        cin >> current;
        if (current >= last)
            len++;
        else
        {
            ans = max(ans, len);
            len = 1;
        }
        last = current;
    }
    ans = max(ans,len);
    cout << ans << endl;
}