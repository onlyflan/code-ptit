#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        multiset<int> ms;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ms.insert(a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (ms.find(i) != ms.end())
            {
                cout << i << " ";
            }
            else
            {
                cout << "-1 ";
            }
        }
        cout << endl;
    }
    return 0;
}