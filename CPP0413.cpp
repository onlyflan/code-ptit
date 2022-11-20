#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i <= (n - 1) / 2; i++)
        {
            if (a[n - 1 - i] == a[i])
                cout << a[i];
            else
                cout << a[n - 1 - i] << " " << a[i] << " ";
        }
        cout << endl;
    }
}
