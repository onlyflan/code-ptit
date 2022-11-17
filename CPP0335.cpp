#include <bits/stdc++.h>
using namespace std;

void mnum(string s)
{
    set<int> se;
    int tmp = 0;
    for (auto x : s)
    {
        if (isdigit(x))
            tmp = tmp * 10 + x - '0';
        else
        {
            se.insert(tmp);
            tmp = 0;
        }
    }
    cout << *se.rbegin() << endl;
}

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
        mnum(s);
    }
}