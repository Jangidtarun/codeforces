#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cin >> input;
    string delimiter = "WUB";
    string token;
    size_t pos = 0;
    while ((pos = input.find(delimiter)) != string::npos)
    {
        token = input.substr(0, pos);
        if (token != "")
            cout << token << " ";
        input.erase(0, pos + delimiter.length());
    }
    cout << input << endl;
}