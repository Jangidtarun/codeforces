#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string game;
    cin >> game;
    int anton = 0, danik = 0;
    for (char c : game)
    {
        if (c == 'A')
            anton++;
        else
            danik++;
    }
    if (anton > danik)
        cout << "Anton" << endl;
    else if (anton < danik)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
}