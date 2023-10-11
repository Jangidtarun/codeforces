#include <bits/stdc++.h>
using namespace std;

bool is_dist(int y)
{
    string year = to_string(y);
    bool hash[26] = {false};
    for (char c : year)
    {
        if (hash[c - '0'])
            return false;
        hash[c - '0'] = true;
    }
    return true;
}

int main()
{
    int y;
    cin >> y;
    if (is_dist(y))
        y++;
    while (!is_dist(y))
        y++;
    cout << y << endl;
}