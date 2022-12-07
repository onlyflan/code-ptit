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
    bool operator<(SinhVien k)
    {
        return this->msv < k.msv;
    }
};

int main()
{
    vector<SinhVien> v;
    SinhVien tmp;
    while (cin >> tmp)
    {
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }

    return 0;
}