#include <bits/stdc++.h>
using namespace std;

void correct(string &word)
{
    for (int i = 0; i < word.length(); i++)
        if (isupper(word[i]))
            word[i] = tolower(word[i]);
        else
            word[i] = toupper(word[i]);
}

int main()
{
    string word;
    cin >> word;
    bool should = true;
    for (int i = 1; i < word.length(); i++)
        if (!isupper(word[i]))
            should = false;
    if (should)
        correct(word);
    cout << word << endl;
}