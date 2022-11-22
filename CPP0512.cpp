#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct PhanSo
{
    ll tu, mau;
};

ll gcd(int a, int b)
{
    while (b != 0)
    {
        ll x = a % b;
        a = b;
        b = x;
    }
    return a;
}
void rutgon(PhanSo &a)
{
    long long tmp = __gcd(a.tu, a.mau);
    a.tu /= tmp;
    a.mau /= tmp;
}

void process(PhanSo a, PhanSo b)
{
    rutgon(a);
    rutgon(b);
    PhanSo res1, res2;
    res1.tu = a.tu * b.mau + b.tu * a.mau;
    res1.tu = res1.tu * res1.tu;
    res1.mau = a.mau * b.mau;
    res1.mau = res1.mau * res1.mau;
    rutgon(res1);
    res2.tu = a.tu * b.tu * res1.tu;
    res2.mau = a.mau * b.mau * res1.mau;
    rutgon(res2);
    cout << res1.tu << "/" << res1.mau << " " << res2.tu << "/" << res2.mau;
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}