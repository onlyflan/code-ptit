#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct PhanSo
{
    ll x, y;
};

void nhap(PhanSo &p)
{
    cin >> p.x >> p.y;
}

void rutgon(PhanSo &p)
{
    ll tmp = __gcd(p.x, p.y);
    p.x /= tmp;
    p.y /= tmp;
}
void in(PhanSo &p)
{
    cout << p.x << "/" << p.y << endl;
}

int main()
{
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}