#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt = 0;

class SinhVien
{
private:
    string msv, ten, lop, email;

public:
    friend istream &operator>>(istream &in, SinhVien &a)
    {
        scanf("\n");
        getline(in, a.msv);
        getline(in, a.ten);
        getline(in, a.lop);
        getline(in, a.email);
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien a)
    {
        out << a.msv << " " << a.ten << " " << a.lop << " " << a.email << endl;
        return out;
    }
    string getLop()
    {
        return this->lop;
    }
};

int main()
{
    int n;
    cin >> n;
    SinhVien a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        cout << "DANH SACH SINH VIEN KHOA " << s << ":\n";
        for (int i = 0; i < n; i++)
        {
            if (a[i].getLop()[1] == s[2] && a[i].getLop()[2] == s[3])
                cout << a[i];
        }
    }
    return 0;
}