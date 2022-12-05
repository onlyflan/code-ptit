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
        int n, k;
        cin >> n >> k;
        int a[10002];
        for (int i = 0; i < n * n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n * n);
        cout << a[k - 1] << endl;
    }
}
