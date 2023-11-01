#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        double dist = 0.0;
        if (n == 1)
            dist = max(a[i] - 0.0, 1.0 * l - a[i]);
        else if (i == 0)
            dist = max(a[i] - 0.0, (a[min(i + 1, n - 1)] - a[i]) / 2.0);
        else if (i == n - 1)
            dist = max((a[i] - a[max(i - 1, 0)]) / 2.0, 1.0 * l - a[i]);
        else
            dist = max((a[i] - a[max(0, i - 1)]) / 2.0, (a[min(i + 1, n - 1)] - a[i]) / 2.0);
        ans = max(ans, dist);
    }
    cout << setprecision(9) << ans << endl;
}