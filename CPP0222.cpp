#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[0][i]] = 1;
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mp[a[i][j]] == i)
                    mp[a[i][j]]++;
            }
        }
        for (auto x : mp)
        {
            if (x.second == n)
                cnt++;
        }
        cout << cnt << endl;
    }
}
