#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long ans = (n % 2 == 0 ? n / 2 : -(n + 1) / 2);
    cout << ans << endl;
}