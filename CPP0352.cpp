#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    map<string, int> mp;
    while (t--)
    {
        string s;
        getline(cin, s);
        vector<string> v;
        string token, res = "";
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        stringstream ss(s);
        while (ss >> token)
        {
            v.push_back(token);
        }
        for (int i = 0; i < v.size() - 1; i++)
        {
            res += v[i][0];
        }
        res = v[v.size() - 1] + res;
        mp[res]++;
        if (mp[res] > 1)
            cout << res << mp[res] << "@ptit.edu.vn";
        else
            cout << res << "@ptit.edu.vn";
        cout << endl;
    }
}
