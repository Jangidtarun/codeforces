#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool ans = false;
    int l[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for (int i = 0; i < sizeof(l) / sizeof(int); i++)
        if (n % l[i] == 0)
            ans = true;
    cout << (ans ? "YES" : "NO") << endl;
}