#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> arr;
    for (int i = 0; i < s.length(); i++)
        if (s[i] != '+')
            arr[i] = s[i]-'0';

    for (auto val : s)
        cout << val << " ";
    cout << endl;
}