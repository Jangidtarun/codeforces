#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    long long x = n / a, y = m / a;
    if (n % a)
        x = n / a + 1;
    if (m % a)
        y = m / a + 1;
    
    cout << x * y << endl;
}