#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        set<char> se;
        for (char x : s)
        {
            se.insert(x);
        }
        int k;
        cin >> k;
        if (26 - se.size() <= k)
        {
            cout << "1" << endl;
        }
        else
            cout << "0" << endl;
    }
}