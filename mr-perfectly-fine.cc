#include <bits/stdc++.h>
using namespace std;
const int M = 2e5 + 10;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int oneone = M, zone = M, onez = M;
        for (int i = 0; i < n; i++)
        {
            int m;
            string s;
            cin >> m >> s;
            if (s == "11")
                oneone = min(m, oneone);
            if (s == "10")
                onez = min(m, onez);
            if (s == "01")
                zone = min(m, zone);
        }

        if (oneone == M)
        {
            if (onez == M or zone == M)
                cout << -1 << endl;
            else
                cout << onez + zone << endl;
        }
        else
        {
            if (onez == M or zone == M)
                cout << oneone << endl;
            else
            {
                if (oneone > onez + zone)
                    cout << onez + zone << endl;
                else
                    cout << oneone << endl;
            }
        }
    }
}