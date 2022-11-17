#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        multiset<char> se1;
        int sum = 0;
        for (auto x : s)
        {
            if (isdigit(x))
            {
                sum += x - '0';
            }
            else
                se1.insert(x);
        }
        for (auto x : se1)
        {
            cout << x;
        }
        cout << sum << endl;
    }
}