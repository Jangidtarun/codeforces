#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000001;
bool prime[MAX] = {false};

void sieve()
{
    int i, j;
    prime[0] = prime[1] = true;

    for (i = 4; i < MAX; i += 2)
        prime[i] = true;

    for (i = 3; i * i <= MAX; i += 2)
        if (!prime[i])
            for (j = i * i; j < MAX; j += 2 * i)
                prime[j] = true;
}

int main()
{
    sieve();
    int n;
    cin >> n;
    while (n--)
    {
        long long t, r;
        cin >> t;
        r = sqrt(t);
        if (!prime[r] and r * r == t)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}