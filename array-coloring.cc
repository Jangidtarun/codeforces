#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            sum += tmp;
        }
        if (sum % 2)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
}