#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);
        set<char> se;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
                se.insert(s[i]);
        }
        for (auto x : se)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}
