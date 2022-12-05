#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool luckyNum(string s)
{
    ll sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
    }
    return (sum % 9 == 0 && sum);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << luckyNum(s) << endl;
    }
}