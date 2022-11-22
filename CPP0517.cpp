#include <bits/stdc++.h>
using namespace std;

struct NhanVien
{
    string ten, gt, ns, dc, nkhd;
    long mst;
};

void nhap(NhanVien &a)
{
    cin.ignore();
    getline(cin, a.ten);
    cin >> a.gt;
    cin >> a.ns;
    cin.ignore();
    getline(cin, a.dc);
    cin >> a.mst;
    cin >> a.nkhd;
}

void inds(NhanVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        string mnv = to_string(i + 1);
        while (mnv.size() < 5)
        {
            mnv = "0" + mnv;
        }
        cout << mnv << " " << a[i].ten << " " << a[i].gt << " " << a[i].ns << " " << a[i].dc << " " << a[i].mst << " " << a[i].nkhd << endl;
    }
}

int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    inds(ds, N);
    return 0;
}