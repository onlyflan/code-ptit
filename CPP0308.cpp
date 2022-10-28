// Liệt kê các kí tự không lặp trong xâu

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
        getline(cin, s);
        map<char, int> mp;
        for (auto x : s)
        {
            mp[x]++;
        }
        for (auto x : s)
        {
            if (mp[x] == 1)
            {
                cout << x;
            }
        }
        cout << endl;
    }
}