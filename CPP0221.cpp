#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int top = 0, down = n - 1, left = 0, right = m - 1;
        int dir = 0;
        while (top < down && left < right)
        {
            int prev = a[top + 1][left];
            for (int i = left; i <= right; i++)
            {
                int cur = a[top][i];
                a[top][i] = prev;
                prev = cur;
            }
            top++;
            for (int i = top; i <= down; i++)
            {
                int cur = a[i][right];
                a[i][right] = prev;
                prev = cur;
            }
            right -= 1;
            if (top <= down)
            {
                for (int i = right; i >= left; i--)
                {
                    int cur = a[down][i];
                    a[down][i] = prev;
                    prev = cur;
                }
                down -= 1;
            }
            if (left <= right)
            {
                for (int i = down; i >= top; i--)
                {
                    int cur = a[i][left];
                    a[i][left] = prev;
                    prev = cur;
                }
                left += 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
}
