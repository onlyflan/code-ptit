#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string ten, lop, ns, msv;
    float gpa;
};

void nhap(SinhVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].ten);
        cin >> a[i].lop >> a[i].ns >> a[i].gpa;
    }
}

bool cmp(SinhVien a, SinhVien b)
{
    return a.gpa > b.gpa;
}

void sapxep(SinhVien a[], int n)
{
    sort(a, a + n, cmp);
}

void change(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    stringstream ss(s);
    string tmp;
    while (ss >> tmp)
    {
        tmp[0] = toupper(tmp[0]);
        cout << tmp << " ";
    }
}

void in(SinhVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i].msv = to_string(i + 1);
        while (a[i].msv.size() < 3)
        {
            a[i].msv = '0' + a[i].msv;
        }
        if (a[i].ns[1] == '/')
            a[i].ns.insert(0, "0");
        if (a[i].ns[4] == '/')
            a[i].ns.insert(3, "0");
        a[i].msv = "B20DCCN" + a[i].msv;
        cout << a[i].msv << " ";
        change(a[i].ten);
        cout << a[i].lop << " " << a[i].ns << " " << fixed << setprecision(2) << a[i].gpa << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt ", "w", stdout);
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}