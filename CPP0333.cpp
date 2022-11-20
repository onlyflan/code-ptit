#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    string temp;
    stringstream ss(s);
    vector<string> v;
    while (ss >> temp)
    {
        v.push_back(temp);
    }
    for (int i = 0; i < v[v.size() - 1].size(); i++)
    {
        v[v.size() - 1][i] = toupper(v[v.size() - 1][i]);
    }
    for (int i = 0; i < v.size() - 1; i++)
    {
        v[i][0] = toupper(v[i][0]);
    }
    for (int i = 0; i < v.size() - 2; i++)
    {
        cout << v[i] << " ";
    }
    cout << v[v.size() - 2] << ", " << v[v.size() - 1];
    return 0;
}