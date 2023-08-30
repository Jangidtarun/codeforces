#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, q;
        cin >> n >> a >> q;
        int plus = 0, minus = 0;
        for (int i = 0; i < q; i++)
        {
            char tmp;
            cin >> tmp;
            if (tmp == '+')
                plus++;
            if (tmp == '-')
                minus++;
        }

        if (a < n)
        {
            if (a + plus > n)
                cout << "YES\n";
            else if (a + plus < n)
                cout << "NO\n";
            else if (a + plus == n)
                if (plus == minus)
                    cout << "MAYBE\n";
        }
        else if (a == n)
            cout << "YES\n";
    }
}