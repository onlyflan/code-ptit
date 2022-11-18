#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (auto i = s.begin(); i != s.end(); ++i)
        cout << *i << " ";
}
