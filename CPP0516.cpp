#include <bits/stdc++.h>
using namespace std;

struct NhanVien
{
    string ma, ten, gt, ns, dc, nkhd;
    long mst;
    int d, m, y;
};

void nhap(NhanVien a[])
{
    
}

bool cmp(NhanVien &a, NhanVien &b)
{
    if (a.y < b.y)
        return 1;
    if (a.y == b.y)
    {
        if (a.m < b.m)
            return 1;
        if (a.m == b.m)
        {
            if (a.d < b.d)
                return 1;
        }
    }
    return 0;
}

void sapxep(NhanVien a[], int n)
{
    sort(a, a + n, cmp);
}

void inds(NhanVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i].ma << " " << a[i].ten << " " << a[i].ns << " " << a[i].dc << " " << a[i].mst << " " << a[i].nkhd << endl;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}