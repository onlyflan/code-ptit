#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt = 0;
class SinhVien
{
private:
    string msv, ten, lop, ns;
    float gpa;

public:
    SinhVien()
    {
        msv = ten = lop = ns = "";
        gpa = 0;
    }
    SinhVien(string ten, string lop, string ns, float gpa)
    {
        this->msv = msv;
        this->ten = ten;
        this->lop = lop;
        this->ns = ns;
        this->gpa = gpa;
    }
    friend istream &operator>>(istream &, SinhVien &);
    friend ostream &operator<<(ostream &, SinhVien);
    friend SinhVien chuanhoa();
};

string chuanhoa(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    stringstream ss(s);
    string token, res;
    while (ss >> token)
    {
        token[0] = toupper(token[0]);
        res += token;
        res += " ";
    }
    res.erase(res.size() - 1);
    return res;
}

istream &operator>>(istream &in, SinhVien &a)
{
    in.ignore();
    getline(in, a.ten);
    cin >> a.lop >> a.ns >> a.gpa;
    if (a.ns[1] == '/')
        a.ns.insert(0, "0");
    if (a.ns[4] == '/')
        a.ns.insert(3, "0");
    a.ten = chuanhoa(a.ten);
    return in;
}

ostream &operator<<(ostream &out, SinhVien a)
{
    ++cnt;
    a.msv = "B20DCCN" + to_string(cnt);
    while (a.msv.size() < 10)
        a.msv.insert(7, "0");
    out << a.msv << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
    return out;
}

int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}