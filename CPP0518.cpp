#include <bits/stdc++.h>
using namespace std;

int stt = 1;
struct NhanVien
{
    string mnv, ten, gt, ns, dc, nkhd, m, d, y, ss;
    long mst, ss1 = 0;
};

string STT(int i)
{
    string r = to_string(i);
    if (i < 10)
        r = "0000" + r;
    else
        r = "000" + r;
    return r;
}

void nhap(NhanVien &a)
{
    a.mnv = STT(stt);
    stt++;
    cin.ignore();
    getline(cin, a.ten);
    cin >> a.gt;
    cin >> a.ns;
    cin.ignore();
    getline(cin, a.dc);
    cin >> a.mst;
    cin >> a.nkhd;
    for (int i = 0; i < a.ns.size(); i++)
    {
        if (i >= 0 && i <= 1)
            a.m += a.ns[i];
        else if (i > 2 && i < 5)
            a.d += a.ns[i];
        else if (i > 5 && i < 10)
            a.y += a.ns[i];
    }
    a.ss += a.y + a.m + a.d;
    for (int i = 0; i < a.ss.size(); i++)
    {
        a.ss1 = a.ss1 * 10 + a.ss[i] - '0';
    }
}

void inds(NhanVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i].mnv << " " << a[i].ten << " " << a[i].gt << " ";
        cout << a[i].m << "/" << a[i].d << "/" << a[i].y << " ";
        cout << a[i].dc << " " << a[i].mst << " " << a[i].nkhd << endl;
    }
}

bool cmp(NhanVien a, NhanVien b)
{
    return a.ss1 < b.ss1;
}

void sapxep(NhanVien a[], int n)
{
    sort(a, a + n, cmp);
}

int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}