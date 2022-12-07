#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << a[0] * a[1] << " ";
        for (i = 1; i < n - 1; i++)
        {
            cout << a[i - 1] * a[i + 1] << " ";
        }
        cout << a[n - 1] * a[n - 2] << endl;
    }
}