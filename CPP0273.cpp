// https://www.youtube.com/watch?v=BHYAldi0EJE
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int equilibrium(int a[], int n)
{
    int rightSum = 0, leftSum = 0, pos = -1;
    for (int i = 0; i < n; i++)
    {
        rightSum += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        rightSum -= a[i];
        if (rightSum == leftSum)
        {
            pos = i + 1;
            break;
        }
        leftSum += a[i];
    }
    return pos;
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
        cout << equilibrium(a, n) << endl;
    }
}