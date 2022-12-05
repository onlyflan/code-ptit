#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        ll b;
        cin >> a >> b;
        ll res = 0;
        for (int i = 0; i < a.size(); i++)
        {
            res = (res * 10 + (a[i] - '0')) % b;
        }
        cout << res << endl;
    }
}