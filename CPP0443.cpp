#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;

    while (t--)
    {
        int n, max = 0;
        cin >> n;
        int a[n - 1];
        set<int> se;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
            se.insert(a[i]);
            if (a[i] > max)
                max = a[i];
        }
        for (int i = 1; i < max; i++)
        {
            if (se.find(i) == se.end())
            {
                cout << i << endl;
                break;
            }
        }
    }
}