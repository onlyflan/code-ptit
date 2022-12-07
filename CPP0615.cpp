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
        scanf("\n");
        getline(in, a.ten);
        getline(in, a.gt);
        getline(in, a.ns);
        getline(in, a.dc);
        getline(in, a.mst);
        getline(in, a.nkhd);
        return in;
    }
    friend ostream &operator<<(ostream &out, NhanVien a)
    {
        out << a.mnv << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nkhd << endl;
        return out;
    }
    bool operator<(NhanVien k)
    {
        int n1 = stoi(this->ns.substr(6, 4));
        int n2 = stoi(k.ns.substr(6, 4));
        int ng1 = stoi(this->ns.substr(3, 2));
        int ng2 = stoi(k.ns.substr(3, 2));
        int t1 = stoi(this->ns.substr(0, 2));
        int t2 = stoi(k.ns.substr(0, 2));
        if (n1 != n2)
            return n1 < n2;
        else if (t1 != t2)
            return t1 < t2;
        return ng1 < ng2;
    }
};
void sapxep(NhanVien a[], int n)
{
    sort(a, a + n);
}

int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    sapxep(ds, N);
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}