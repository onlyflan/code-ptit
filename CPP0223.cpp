#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        int a[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int top = 0, down = m - 1, left = 0, right = n - 1;
        int dir = 0;
        while (top <= down && left <= right)
        {
            if (dir == 0)
            {
                for (int i = left; i <= right; i++)
                {
                    cout << a[top][i] << " ";
                }
                top += 1;
            }
            else if (dir == 1)
            {
                for (int i = top; i <= down; i++)
                {
                    cout << a[i][right] << " ";
                }
                right -= 1;
            }
            else if (dir == 2)
            {
                for (int i = right; i >= left; i--)
                {
                    cout << a[down][i] << " ";
                }
                down -= 1;
            }
            else if (dir == 3)
            {
                for (int i = down; i >= top; i--)
                {
                    cout << a[i][left] << " ";
                }
                left += 1;
            }
            dir = (dir + 1) % 4;
        }
        cout << endl;
    }
}
