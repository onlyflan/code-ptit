#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll hypotenuse(ll x, ll y)
{
    ll z = x * x + y * y;
    ll k = sqrt(z);
    if (k * k == z)
        return k;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int check = 0;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                ll x = hypotenuse(a[j], a[i]);
                if (x && binary_search(a + j + 1, a + n, x))
                {
                    check = 1;
                    break;
                }
            }
            if (check == 1)
                break;
        }   
        if (check)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}