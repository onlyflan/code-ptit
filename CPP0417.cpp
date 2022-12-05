#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        int minpos = 0, maxpos = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (b[i] != a[i])
            {
                minpos = i + 1;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (b[i] != a[i])
            {
                maxpos = i + 1;
                break;
            }
        }
        cout << minpos << " " << maxpos << endl;
    }
}