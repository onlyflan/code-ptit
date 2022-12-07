#include <bits/stdc++.h>
using namespace std;

bool tn(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[s.size() - 1 - i])
        {
            return false;
            break;
        }
    }
    return true;
}

bool cmp(pair<string, int> &a, pair<string, int> &b)
{
    if (a.first.length() > b.first.length())
        return 1;
    if (a.first.length() < b.first.length())
        return 0;
    for (int i = 0; i < a.first.length(); ++i)
    {
        if (a.first[i] > b.first[i])
            return 1;
        if (a.first[i] < b.first[i])
            return 0;
    }
}

int main()
{
    string s;
    map<string, int> mp;
    while (cin >> s)
    {
        if (tn(s) && s.size() > 1)
            mp[s]++;
    }
    vector<pair<string, int>> v;
    for (auto it : mp)
    {
        v.push_back(it);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto it : v)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}