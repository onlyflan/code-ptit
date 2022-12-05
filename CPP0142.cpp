#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}

bool check(int a, int b)
{
    return (__gcd(a, b) == 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            if (check(i, n))
                cnt++;
        }
        if (prime(cnt))
            cout << "1\n";
        else
            cout << "0\n";
    }
}
