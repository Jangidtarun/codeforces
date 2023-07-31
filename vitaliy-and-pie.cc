#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    string s;
    cin >> n >> s;
    unordered_map<char, int> hmap;
    for (int i = 0; i < s.length(); i += 2)
    {
        char key, lock;
        key = s[i], lock = s[i + 1];
        hmap[key]++;
        if (hmap.find(tolower(lock)) != hmap.end() and hmap[tolower(lock)] != 0)
            hmap[tolower(lock)]--;
        else
            count++;
    }
    cout << count << endl;
}