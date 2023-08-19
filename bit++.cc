#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int val = 0;
    while (n--)
    {
        string com;
        cin >> com;
        for (int i = 0; i < com.length(); i++)
        {
            if (com[i] == '+')
            {
                val++;
                break;
            }
            else if (com[i] == '-')
            {
                val--;
                break;
            }
        }
    }
    cout << val << endl;
}