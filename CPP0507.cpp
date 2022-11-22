#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct PhanSo
{
    ll tu, mau;
};

void nhap(PhanSo &p)
{
    cin >> p.tu >> p.mau;
}

void rutgon(PhanSo &p)
{
    ll ucln = __gcd(p.tu, p.mau);
    p.tu /= ucln;
    p.mau /= ucln;
}

PhanSo tong(PhanSo &p, PhanSo &q)
{
    PhanSo res;
    rutgon(p);
    rutgon(q);
    res.tu = p.tu * q.mau + q.tu * p.mau;
    res.mau = p.mau * q.mau;
    rutgon(res);
    return res;
}

void in(PhanSo &t)
{
    cout << t.tu << "/" << t.mau;
}

int main()
{
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}