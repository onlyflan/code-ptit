#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt = 0;

class NhanVien
{
private:
    string mnv, ten, gt, ns, dc, mst, nkhd;

public:
    friend istream &operator>>(istream &in, NhanVien &a)
    {
        ++cnt;
        a.mnv += to_string(cnt);
        while (a.mnv.size() < 5)
        {
            a.mnv = "0" + a.mnv;
        }
        in.ignore();
        getline(in, a.ten);
        in >> a.gt >> a.ns;
        in.ignore();
        getline(in, a.dc);
        in >> a.mst >> a.nkhd;
        return in;
    }
    friend ostream &operator<<(ostream &out, NhanVien a)
    {
        out << a.mnv << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nkhd << endl;
        return out;
    }
};

int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}