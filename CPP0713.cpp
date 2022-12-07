#include <bits/stdc++.h>
using namespace std;

int i, n, a[100], b[100] = {0};

void result()
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
    cout << " ";
}

void Try(int j)
{
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 0)
        {
            a[j] = i;
            b[i] = 1;
            if (j == n)
            {
                result();
            }
            else
            {
                Try(j + 1);
            }
            b[i] = 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        Try(1);
        cout << endl;
    }
}