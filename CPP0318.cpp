#include <bits/stdc++.h>
using namespace std;

int tangChat(string s)
{
    if (s[5] < s[6] && s[6] < s[7] && s[7] < s[9] && s[9] < s[10])
        return 1;
    else
        return 0;
}

int e1(string s)
{
    if (s[5] == s[6] && s[6] == s[7] && s[7] == s[9] && s[9] == s[10])
        return 1;
    else
        return 0;
}

int e2(string s)
{
    if (s[5] == s[6] && s[6] == s[7] && s[9] == s[10])
        return 1;
    else
        return 0;
}

int locPhat(string s)
{
    for (int i = 5; i < s.size(); ++i)
    {
        if (i == 8)
            continue;
        if (s[i] != '6' && s[i] != '8')
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string a;
        cin >> a;
        if (tangChat(a) || e1(a) || e2(a) || locPhat(a))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}