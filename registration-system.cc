#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    map<string, int> name_freq;
    while (t--)
    {
        string s;
        cin >> s;
        string new_name;
        bool flag = false;
        if (name_freq.find(s) != name_freq.end())
        {
            new_name = s + to_string(name_freq[s] + 1);
            name_freq[s]++;
            name_freq[new_name];
            flag = true;
        }
        else
            name_freq[s];
        if (flag)
            cout << new_name << endl;
        else
            cout << "OK\n";
    }
}