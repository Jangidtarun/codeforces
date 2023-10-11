#include <bits/stdc++.h>
using namespace std;

bool is_vowel(char c)
{
    if (c == 'y' or c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u')
        return true;
    return false;
}

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
        if (is_vowel(s[i]))
        {
            s.erase(i, 1);
            i--;
        }
    }
    for (int i = 0; i < s.length(); i += 2)
        s.insert(i, 1, '.');
    cout << s << endl;
}
