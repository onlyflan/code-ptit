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
        int k, cnt = 0;
        cin >> k;
        for (int i = 0; i < s.size(); ++i)
        {
            set<char> se;
            for (int j = i; j < s.size(); ++j)
            {
                se.insert(s[j]);
                if (se.size() == k)
                    cnt++;
                if (se.size() > k)
                {
                    break;
                }
            }
        }
        cout << cnt << endl;
    }
}