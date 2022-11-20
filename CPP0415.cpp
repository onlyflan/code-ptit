#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        long long a[n], b[m];
        long long max = -1e8, min = 1e8;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > max)
                max = a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] < min)
                min = b[i];
        }
        cout << max * min << endl;
    }
}
