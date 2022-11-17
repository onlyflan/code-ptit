#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void tong(string s)
{
    int res = 0;
    int temp = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            temp = temp * 10 + s[i] - '0';
            if (i == s.size() - 1)
                res += temp;
        }
        else
        {
            res += temp;
            temp = 0;
        }
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        tong(s);
    }
}