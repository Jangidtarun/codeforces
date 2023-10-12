#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    long long ans = 0;
    if (n % 2)
    {
        long long halfpoint = (n + 1) / 2;
        if (k <= halfpoint)
            ans = 2 * k - 1;
        else
            ans = 2 * (k - halfpoint);
    }
    else
    {

        long long halfpoint = n / 2;
        if (k <= halfpoint)
            ans = 2 * k - 1;
        else
            ans = 2 * (k - halfpoint);
    }
    cout << ans << endl;
}