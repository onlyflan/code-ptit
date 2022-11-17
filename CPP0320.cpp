#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        set<char> se;
        int check = 0, cnt = 0;
        for (auto x : s)
        {
            se.insert(x);
        }
        for (auto x : se)
        {
            if (isdigit(x))
                cnt++;
            else
                check = -1;
        }
        if (s[0] == 0)
            check = -1;
        if (check == -1)
            cout << "INVALID\n";
        else if (cnt == 10)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}