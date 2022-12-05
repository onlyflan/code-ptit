#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool fibo(int n)
{
    if (n < 2)
        return true;
    int fn2 = 0, fn1 = 1;
    for (int i = 2; i < 18; i++)
    {
        int fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;
        if (n == fn)
        {
            return true;
            break;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (fibo(a[i]))
                cout << a[i] << " ";
        }
        cout << endl;
    }
}