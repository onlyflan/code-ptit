#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        for (int i = 1; i < sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                    cnt++;
                if ((n / i) % 2 == 0)
                    cnt++;
            }
        }
        int k = sqrt(n);
        if (k * k == n && k % 2 == 0)
            cnt++;
        cout << cnt << endl;
    }
}
