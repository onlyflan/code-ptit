#include <bits/stdc++.h>
using namespace std;
int sphenic(int n)
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        int kt = 0;
        while (n % i == 0)
        {
            n /= i;
            cnt++;
            kt++;
            if (kt == 2)
                return 0;
        }
    }
    if (n > 1)
        cnt++;
    return (cnt == 3);
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt ", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << sphenic(n) << endl;
    }
}
