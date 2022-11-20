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
        int n, res = -1, check = 0;
        cin >> n;
        int b[1000002];
        memset(b, 0, sizeof(b));
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b[x]++;
            if (check == 0 && b[x] == 2)
            {
                res = x;
                check = 1;
            }
        }
        cout << res << endl;
    }
}