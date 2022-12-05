#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string diff(string a, string b)
{
    string res = "";
    while (a.size() < b.size())
        a = '0' + a;
    while (b.size() < a.size())
        b = '0' + b;
    if (a < b)
        swap(a, b);
    int nho = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int x = a[i] - '0', y = b[i] - '0';
        if (x - y - nho < 0)
        {
            res = to_string(10 + x - y - nho) + res;
            nho = 1;
        }
        else
        {
            res = to_string(x - y - nho) + res;
            nho = 0;
        }
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        cout << diff(a, b) << endl;
    }
}