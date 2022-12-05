#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll Lcm(ll x, ll y)
{
    ll res = x * y / __gcd(x, y);
    return res;
}

ll check(ll x, ll y, ll z, ll n)
{
    ll lcm = Lcm(x, y);
    lcm = Lcm(z, lcm);
    ll min = ceil(pow(10, n - 1) / lcm);
    ll res = min * lcm;
    if (res >= pow(10, n))
        return -1;
    else
        return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, z, n;
        cin >> x >> y >> z >> n;
        cout << check(x, y, z, n) << endl;
    }
}
