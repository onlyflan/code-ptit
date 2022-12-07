#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt = 0;
class ThucTap
{
private:
    string ma, ten;
    int num;

public:
    friend istream &operator>>(istream &in, ThucTap &a)
    {
        in.ignore();
        getline(in, a.ma);
        getline(in, a.ten);
        in >> a.num;
        return in;
    }
    friend ostream &operator<<(ostream &out, ThucTap a)
    {
        out << a.ma << " " << a.ten << " " << a.num << endl;
        return out;
    }
    int getNum()
    {
        return this->num;
    }
    string getMa()
    {
        return this->ma;
    }
};

bool cmp(ThucTap a, ThucTap b)
{
    if (a.getNum() != b.getNum())
        return a.getNum() > b.getNum();
    return a.getMa() < b.getMa();
}

int main()
{
    int n;
    cin >> n;
    ThucTap a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        cout << " DANH SACH DOANH NGHIEP NHAN TU " << x << " DEN " << y << " SINH VIEN:\n";
        for (int i = 0; i < n; i++)
        {
            if (a[i].getNum() <= y && a[i].getNum() >= x)
                cout << a[i];
        }
    }
}