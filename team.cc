#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    while (n--)
    {
        int tmpsum = 0;
        for (int i = 0; i < 3; i++)
        {
            int tmp;
            cin >> tmp;
            tmpsum += tmp;
        }
        if (tmpsum > 1)
            sum++;
    }
    cout << sum << endl;
}