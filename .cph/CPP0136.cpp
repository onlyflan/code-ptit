#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int prime[1000000];
void sieve()
{
    for (int i = 0; i <= 1000000; i++)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= 1000; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 1000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        sieve();
        int n, cnt = 0;
        cin >> n;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (prime[i])
                cnt++;
        }
        cout << cnt << endl;
    }
}
