#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int fibo(ll n)
{
    if (n < 2)
        return 1;
    ll fn2 = 0, fn1 = 1;
    for (int i = 2; i <= 92; i++)
    {
        ll fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;
        if (n == fn)
        {
            return 1;
            break;
        }
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (fibo(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
