#include <bits/stdc++.h>
using namespace std;

struct NhanVien
{
    string mnv = {"00001"}, ten, gt, ns, dc, nkhd;
    long mst;
};

void nhap(NhanVien &a)
{
    getline(cin, a.ten);
    cin >> a.gt;
    cin >> a.ns;
    cin.ignore();
    getline(cin, a.dc);
    cin >> a.mst;
    cin >> a.nkhd;
}

void in(NhanVien &a)
{
    cout << a.mnv << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nkhd;
}

int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}