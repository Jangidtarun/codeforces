#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int last;
    cin >> last;
    int current;
    cin >> current;
    for (int i = 2; i < n; i++)
    {
        int next;
        cin >> next;
        if (last % 2 == next % 2)
        {
            if (current % 2 == 0)
            {
                ans = i + 1;
                break;
            }
        }
        else if (last % 2 == current % 2)
        {
            if (next % 2 == 0)
            {
                ans = i + 2;
                break;
            }
        }
        else if (current % 2 == next % 2)
        {
            if (last % 2 == 0)
            {
                ans = i;
                break;
            }
        }
        last = current;
        current = next;
    }
    cout << ans << endl;
}