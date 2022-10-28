#include <bits/stdc++.h>
using namespace std;

bool thuanNghich(string s)
{
    for (int i = 0; i <= s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - 1 - i])
        {
            return false;
            break;
        }
    }
    return true;
}

bool soChan(string s)
{
    for (int i = 0; i < s.size() / 2; i++)
    {
        if ((s[i] - '0') % 2 != 0)
            return false;
        break;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (soChan(s) && thuanNghich(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}