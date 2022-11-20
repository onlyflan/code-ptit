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
        int n, k;
        cin >> n >> k;
        int a[n], cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] + a[j] == k)
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
}
