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
        ll a, x, y;
        cin >> a >> x >> y;
        ll temp = __gcd(x, y);
        while (temp--)
        {
            cout << a;
        }
        cout << endl;
    }
}
