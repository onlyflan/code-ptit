#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n, min = 1e3, max = 0, cnt = 0;
        cin >> n;
        int a[n];
        set<int> se;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            se.insert(a[i]);
            if (a[i] < min)
                min = a[i];
            if (a[i] > max)
                max = a[i];
        }
        for (int i = min; i < max; i++)
        {
            if (se.find(i) == se.end())
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}