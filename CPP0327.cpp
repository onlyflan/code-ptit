#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int res = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
                res = (2 * res + 1) % 5;
            else
                res = (2 * res) % 5;
        }
        res == 0 ? cout << "Yes\n" : cout << "No\n";
    }
}