// Đếm xâu con có kí tự đầu và cuối giống nhau

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
        for (char x : s)
        {
            mp[x]++;
        }
        int res = s.size();
        for (auto x : mp)
        {
            res += x.second * (x.second - 1) / 2;
        }
        cout << res << endl;
    }
}