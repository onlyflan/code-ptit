#include <bits/stdc++.h>
using namespace std;

void nhoNhat(int m, int s)
{
    string res = "";
    int x = s - 9 * (m - 1);
    if (x <= 1)
    {
        s -= 1;
        for (int i = 1; i < m; i++)
        {
            if (s >= 9)
            {
                res += "9";
                s -= 9;
            }
            else
            {
                res = to_string(s) + res;
                s = 0;
            }
        }
        res = "1" + res;
    }
    else
    {
        for (int i = 1; i <= m; i++)
        {
            if (s >= 9)
            {
                res += "9";
                s -= 9;
            }
            else
            {
                res = to_string(s) + res;
                s = 0;
            }
        }
    }
    cout << res << " ";
}

void lonNhat(int m, int s)
{
    string res = "";
    for (int i = 1; i <= m; i++)
    {
        if (s >= 9)
        {
            res = "9" + res;
            s -= 9;
        }
        else
        {
            res += to_string(s);
            s = 0;
        }
    }
    cout << res;
}

int main()
{
    int m, s;
    cin >> m >> s;
    if ((s == 0 && m != 1) || s > 9 * m)
    {
        cout << "-1 -1";
    }
    else
    {
        nhoNhat(m, s);
        lonNhat(m, s);
    }
}