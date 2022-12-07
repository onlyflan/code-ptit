#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct Time
{
    int h, m, s;
    int g;
};

bool cmp(Time a, Time b)
{
    return a.g < b.g;
}

int main()
{
    int n;
    cin >> n;
    Time a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].h >> a[i].m >> a[i].s;
        a[i].g = a[i].h * 60 * 60 + a[i].m * 60 + a[i].s;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].h << " " << a[i].m << " " << a[i].s << endl;
    }
}