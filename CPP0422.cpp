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
        ll a[n], cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                cnt++;
            else
                cout << a[i] << " ";
        }
        for (int i = 0; i < cnt; i++)
        {
            cout << "0"
                 << " ";
        }
        cout << endl;
    }
}
