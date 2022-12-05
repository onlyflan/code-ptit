#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int a[n][n], b[n * n], x = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            b[x] = a[i][j];
            x++;
        }
    }
    sort(b, b + n * n);
    int top = 0, down = n - 1, left = 0, right = n - 1;
    int dir = 0;
    x = 0;
    while (top <= down && left <= right)
    {
        if (dir == 0)
        {
            for (int i = left; i <= right; i++)
            {
                a[top][i] = b[x];
                x++;
            }
            top++;
        }
        if (dir == 1)
        {
            for (int i = top; i <= down; i++)
            {
                a[i][right] = b[x];
                x++;
            }
            right--;
        }
        if (dir == 2)
        {
            for (int i = right; i >= left; i--)
            {
                a[down][i] = b[x];
                x++;
            }
            down--;
        }
        if (dir == 3)
        {
            for (int i = down; i >= top; i--)
            {
                a[i][left] = b[x];
                x++;
            }
            left++;
        }
        dir = (dir + 1) % 4;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}