#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        map<char, int> mp;
        string s;
        getline(cin, s);
        int max_fre = INT_MIN;
        for (auto x : s)
        {
            mp[x]++;
        }
        for (auto it : mp)
        {
            if (it.second > max_fre)
            {
                max_fre = it.second;
            }
        }
        if (max_fre - 1 <= (int)(s.size() - max_fre))
            cout << "1\n";
        else
            cout << "0\n";
    }
}