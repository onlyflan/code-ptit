#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int l, r, check = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> l >> r;
        int max = INT_MIN, pos;
        for (int i = l; i <= r; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
                pos = i;
            }
        }
        for (int i = l; i < pos; i++)
        {
            if (a[i] > a[i + 1])
            {
                check = 0;
                break;
            }
        }
        for (int i = pos + 1; i < r; i++)
        {
            if (a[i] < a[i + 1])
            {
                check = 0;
                break;
            }
        }
        if (check)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}