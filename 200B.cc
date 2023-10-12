#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double ovol = 0;
    for (int i = 0; i < n; i++)
    {
        int pi;
        cin >> pi;
        ovol += pi;
    }
    cout << setprecision(10) << ovol / n << endl;
}