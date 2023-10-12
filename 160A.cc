#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int sum = accumulate(a, a + n, 0);
    sort(a, a + n);
    reverse(a, a + n);
    int tmpsum = 0;
    int i = 0;
    for (; i < n; i++)
    {
        if (tmpsum > sum - tmpsum)
            break;
        tmpsum += a[i];
    }

    cout << i << endl;
}