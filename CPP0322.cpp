#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string sum(string a, string b)
{
    string res = "";
    while (a.size() < b.size())
        a = '0' + a;
    while (b.size() < a.size())
        b = '0' + b;
    int nho = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int x = a[i] - '0', y = b[i] - '0';
        res = to_string((x + y + nho) % 10) + res;
        nho = (x + y + nho) / 10;
    }
    if (nho > 0)
        res = '1' + res;
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
        cout << sum(a, b) << endl;
    }
}