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
        getline(cin, s);
        string tmp;
        stringstream ss(s);
        int odd = 0, even = 0, num = 0, cnt = 0;
        while (ss >> tmp)
        {
            for (int i = 0; i < tmp.size(); i++)
            {
                num = num * 10 + tmp[i] - '0';
            }
            if (num % 2 == 0)
            {
                even++;
            }
            else
                odd++;
            cnt++;
        }
        if (cnt % 2 == 0 && even > odd || cnt % 2 == 1 && even < odd)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}