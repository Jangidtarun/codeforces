#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool ans = true;
    while (n--)
    {
        int tmp;
        cin >> tmp;
        if (tmp == 1)
        {
            ans = false;
            break;
        }
    }
    cout << (ans ? "easy" : "hard") << endl;
}