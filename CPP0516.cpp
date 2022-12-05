#include <bits/stdc++.h>
using namespace std;
struct MatHang
{
    string ten, nhom;
    float mua, ban, ln;
    int ma;
};

void nhap(MatHang a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].ten);
        getline(cin, a[i].nhom);
        cin >> a[i].mua >> a[i].ban;
        a[i].ma = i + 1;
        a[i].ln = a[i].ban - a[i].mua;
    }
}

bool cmp(MatHang &a, MatHang &b)
{
    return a.ln > b.ln;
}

void sapxep(MatHang a[], int n)
{
    sort(a, a + n, cmp);
}

void in(MatHang a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i].ma << " " << a[i].ten << " " << a[i].nhom << " " << fixed << setprecision(2) << a[i].ln << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    MatHang ds[50];
    nhap(ds, n);
    sapxep(ds, n);
    in(ds, n);
}