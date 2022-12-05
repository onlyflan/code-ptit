#include <iostream>
#include <algorithm>
using namespace std;

int bns(int a[], int n, int x)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (r + l) / 2;
        if (a[m] == x)
            return m;
        if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int check = -1;
        for (int i = 0; i < n; i++)
        {
            if (bns(a, n, x + a[i])) // binary_search(a, a + n, x + a[i);
            {
                check = 1;
                break;
            }
        }
        cout << check << endl;
    }
}