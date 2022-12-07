#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    int stt;
    string msv, ten, lop, email, dn;
};

bool cmp(SinhVien a, SinhVien b)
{
    return a.ten < b.ten;
}

int main()
{
    int n;
    cin >> n;
    SinhVien a[n];
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        a[i].stt = i + 1;
        getline(cin, a[i].msv);
        getline(cin, a[i].ten);
        getline(cin, a[i].lop);
        getline(cin, a[i].email);
        getline(cin, a[i].dn);
    }
    sort(a, a + n, cmp);
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (a[i].dn == s)
                cout << a[i].stt << " " << a[i].msv << " " << a[i].ten << " " << a[i].lop << " " << a[i].email << " " << a[i].dn << " " << endl;
        }
    }

    return 0;
}