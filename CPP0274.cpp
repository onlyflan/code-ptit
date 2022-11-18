#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[1000002] = {0}, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (b[a[i]] == 1)
            {
                cnt += 2;
            }
            else if (b[a[i]] > 1)
                cnt++;
            b[a[i]]++;
        }
        cout << cnt << endl;
    }
}