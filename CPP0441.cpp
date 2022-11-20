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
        int n, x, res = -1, check = 0;
        cin >> n >> x;
        for (int i = 1; i <= n; i++)
        {
            int k;
            cin >> k;
            if (k == x && check == 0)
            {
                res = i;
                check = 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}